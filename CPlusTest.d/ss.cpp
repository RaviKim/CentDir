#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
    int cnt = 0; // Testcase T
    int A,B,C,D = 0;

    scanf("%d", &cnt);
    
    int AliceRate;
    int BobRate;

    for(int i = 1; i <= cnt; i++){
    	scanf("%d %d %d %d", &A, &B, &C, &D);
		
        AliceRate =((double)A/(double)B) * 100.00;
        BobRate =((double)C/(double)D) * 100.00;
		
		
		printf("#%d ", i);
		
        if(AliceRate > BobRate){
        	printf("ALICE");
        }
        else if(AliceRate < BobRate){
			printf("BOB");
        }
        else{
            printf("DRAW");
        }
		printf("\n");
    }
	
}
