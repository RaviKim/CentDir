#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


#define FLAG_AAA 0x004	//4
#define FLAG_AAA 0x008	//8
#define FLAG_AAA 0x010	//16
#define FLAG_AAA 0x018	//24
#define FLAG_EEE 0x020  //32

struct bitfield{
	unsigned char a4 : 4;
	unsigned char a8 : 8;
	unsigned int a16 : 16;
	unsigned int a24 : 24;
	unsigned int a32 : 32;
}a[32];

int main(void){

	a[32];
	unsigned int b;

	a[32].a4 = 0xf;
	a[32].a8 = 0xff;
	a[32].a16 = 0xfff;
	a[32].a24 = 0xffff;
	a[32].a32 = 0xfffff;

	while(1){
//	printf("Memory Initializaion...\n");
//	memset(a, 0, sizeof(unsigned int) *32); // mem init
	
	printf("Input Num (4,8,16,24,32) : ");
	scanf("%d", &b);

	if (b == 4|| b == 8 || b == 16 || b == 24 || b == 32){
		switch(b){
		case 4:
			printf("Size = %d, value is %x\n", sizeof(a[32]),a[32].a4);
			break;

		
		
		}



	}
	else
		printf("You need to put it (4,8,16,24,32) ");


//	free(a);
	}


	return 0;

}
