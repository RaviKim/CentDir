#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

int BubbleSort[100] = {0,};

int main(void){
	int i , j , temp;
	int roopCnt = 0;
	unsigned long s_tick = 0, e_tick = 0;
	unsigned long dur1 , dur2 = 0;

	cout << "Input ArraySize ";
	cin >> roopCnt;
	int printCnt = roopCnt;
	
	s_tick = clock();
	cout << " Input BubbleSort Array Param :" ;
	for(i = 0; i < roopCnt; i++){
		cin >> BubbleSort[i];
	}


	int forCnt = roopCnt;
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
		for(int a = 0; a < printCnt; a++)
		{
			cout << BubbleSort[a] << " | " ;
		}
		cout << endl;

	}
	e_tick = clock();

	dur1 = e_tick - s_tick;

	cout << "Necessary Time is : " << dur1 << endl;

}
