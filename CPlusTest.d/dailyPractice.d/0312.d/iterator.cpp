#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);


	vector<int>::iterator iter = v.begin();

	cout << iter[2] << endl;
	
	iter +=2;

	cout << *iter << endl;
	cout << endl;

	for(iter = v.begin(); iter!=v.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << endl;

	for(iter = v.begin(); iter!=v.end(); ++iter)
	{
		cout << *iter << endl;
	}
}
