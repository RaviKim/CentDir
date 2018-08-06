// Made By RaviKim
// BJ_1517.
// Make BubbleSort.

#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

//unsigned int BubbleSort[1000000000] = {0,};

int main(void){
	int i , j , temp;
	int roopCnt = 0;

	cin >> roopCnt; //N
	int printCnt = roopCnt;
	unsigned int *BubbleSort = new unsigned int[roopCnt];

	for(i = 0; i < roopCnt; i++){
		cin >> BubbleSort[i];
	}


	int forCnt = roopCnt;
	int SwapCnt = 0;
	while(roopCnt--)
	{
		for(i = 0; i < forCnt; i++)
		{
			if(BubbleSort[i] > BubbleSort[i+1] && i+1 != forCnt)
			{
				temp = BubbleSort[i];
				BubbleSort[i] = BubbleSort[i+1];
				BubbleSort[i+1] = temp;
				SwapCnt++;
			}
		}
	}
	cout << SwapCnt;	
	delete [] BubbleSort;
}
