#include <stdio.h>
#include <string>
#include <malloc.h>
int main(void){
    int i , j , temp;
    int roopCnt = 0;

    scanf("%d", &roopCnt);
	
    int printCnt = roopCnt;
 //   long long  *BubbleSort = new long long[roopCnt];

	int * BubbleSort = (int *) malloc(sizeof(int) * roopCnt);
    for(i = 0; i < roopCnt; i++){
		scanf("%d", &BubbleSort[i]);
    }


    int forCnt = roopCnt;
    int SwapCnt = 0;
	roopCnt -=1;
    while(roopCnt--)
    {   
        for(i = 0; i < forCnt; i++)
        {
            if(BubbleSort[i] > BubbleSort[i+1])
            {   
				std::swap(BubbleSort[i],BubbleSort[i+1]);
				SwapCnt++;
				
            }   
        }   
		
    }   
    
	printf("%d", SwapCnt);
}

