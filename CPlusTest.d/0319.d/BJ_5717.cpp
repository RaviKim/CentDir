#include <iostream>
using namespace std;


int main(void)
{
	int maleFr=0;
	int femaleFr=0; 
	int addFr[100]={0,}; // male + female 
	int finish;
	int cnt = 0;

	while(finish != 0)
	{
		cin >> maleFr;
		cin >> femaleFr;
		
		addFr[cnt] = maleFr+femaleFr;
		cnt++;

		if(maleFr=0 && femaleFr=0){
			finish = 0;
		}
	}

	for(cnt = 0; cnt < 100; cnt++)
	{
		cout << addFr[cnt] << endl;
	}


}
