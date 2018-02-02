#include <iostream>
#include <cstring>
#include <map>
#include <cstdio>


using namespace std;

struct SProduct
{
	string Name;
	int Price;
}arPro[]={
	{"ABC", 500}, 		{"List", 400}, 		{"TestString", 250}, {"ravi", 450},
	{"Dunhil", 4500}, 	{"malbolo",3000},	{"Glo", 4800},		{"iQos", 4500},
};



int  main()
{
	map<string, int> mPro;
	map<string, int>::iterator it;
	int i;
	string Name;


	for(i = 0; i < sizeof(arPro)/sizeof(arPro[0]); i++)
	{
		mPro[arPro[i].Name] = arPro[i].Price;
	}

	for(;;)
	{
		cout << " Input Products's name : ";
		cin >> Name;
		if(Name == "exit") break;
		it = mPro.find(Name);
		if(it == mPro.end())
		{
			cout <<"There is no product "<< endl;
		}
		else
		{
			cout << Name << "'s price is " << it->second << endl;
		}
	}

}
