#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>


int main(void){
	int *arr1 = (int*)malloc(sizeof(int)*5);
	int i;
	unsigned int a[32]; // 4*32 byte array
	unsigned int b; // input parameter 4 , 8 , 16, , 24, 32

	printf("Before Memory initialization ========== \n");
	memset(a, 0, sizeof(int)*32);	//Memory initializaion.
	
	printf("Input Number what you want to know array Mem :");
	scanf("%d", &b);
	
	while(b!=0){
		switch(b){
			case 4:
							
			break;

			case 8:
			
			break;

			case 16:
			
			break;

			case 24:
			
			break;

			case 32: 
			
			break;
		}

	}
	free(a); 
	return 0;
}
