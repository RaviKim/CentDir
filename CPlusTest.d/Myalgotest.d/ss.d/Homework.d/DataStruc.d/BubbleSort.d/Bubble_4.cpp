#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

int BubbleSort[50000] = {0,};

void Swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}

void Print(int arr[], int Count){
for(int i = 0; i < Count; i++) 
{
	cout << arr[i] << " | ";	
}	

}


int main(void){
	int i , j , temp;
	int roopCnt = 0;
	unsigned long s_tick = 0, e_tick = 0;
	unsigned long dur1 , dur2 = 0;

	cout << "Input ArraySize ";
	cin >> roopCnt;
	int printCnt = roopCnt;

	cout << " Input BubbleSort Array Param :" ;
	for(i = 0; i < roopCnt; i++){
		cin >> BubbleSort[i];
	}


	int forCnt = roopCnt;
	roopCnt -=1;
	while(roopCnt--)
	{
		for(i = 0; i < forCnt; i++)
		{
			if(BubbleSort[i] > BubbleSort[i+1] && i+1 != forCnt)
			{
				Swap(&BubbleSort[i] , &BubbleSort[i+1]);
			}
		}

		cout << "Present Array status : " ;
		Print(BubbleSort, printCnt);
		cout << endl;

	}



}


