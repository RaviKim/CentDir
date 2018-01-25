#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


#define bit4 0x00
#define bit8 0x000
#define bit16 0x0000
#define bit24 0x00000
#define bit32 0x000000


int main(void){
	//int *arr1 = (int*)malloc(sizeof(int)*5);
	int i;
	unsigned int a[32]; // 4*32 byte array
	unsigned int b; // input parameter 4 , 8 , 16, 24, 32

	unsigned int SaveArray[32];

	printf("Before Memory initialization ========== \n");
	memset(a, 0, sizeof(int)*32);	//Memory initializaion.



	printf("Input Number what you want to know array Mem :(4,8,16,24,32)");
	scanf("%d", &b);
	while(b!=0){
	if(b==4 && b==8 && b==16 && b==24 && b==32){
		switch(b){
			case 4:
			memcpy(SaveArray,a, sizeof(bit4)*32);
			fputs(a,stdout);
			break;

			case 8:
			memcpy(SaveArray,a, sizeof(bit8)*32);
			break;

			case 16:
			memcpy(SaveArray,a, sizeof(bit16)*32);
			break;

			case 24:
			memcpy(SaveArray,a, sizeof(bit24)*32);
			break;

			case 32: 
			memcpy(SaveArray,a, sizeof(bit32)*32);
			break;
		}
	}
	else
		printf("You need in put 4,8,16,24,32\n");
		break;
	}

	free(a); 
	return 0;
}
