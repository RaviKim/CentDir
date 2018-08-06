#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;


int main(void){
	int BubbleSort[5]= {9,1,3,2,7};

	int i , j , temp;
	int roopCnt = 5;
	int forCnt = 5;
	unsigned long s_tick = 0, e_tick = 0;
	unsigned long dur1 , dur2 = 0;

	s_tick = clock();
	while(roopCnt--)
	{
		for(i = 0; i < forCnt; i++)
		{
			if(BubbleSort[i] > BubbleSort[i+1] && i+1 != forCnt)
			{
				temp = BubbleSort[i];
				BubbleSort[i] = BubbleSort[i+1];
				BubbleSort[i+1] = temp;
			}
		}

		cout << "Present Array status : " ;
		for(int a = 0; a < 5; a++)
		{
			cout << BubbleSort[a] << " | " ;
		}
		cout << endl;

	}
	e_tick = clock();

	dur1 = e_tick - s_tick;

	cout << "Necessary Time is : " << dur1 << endl;

}
