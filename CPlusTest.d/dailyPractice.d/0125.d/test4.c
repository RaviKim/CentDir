#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


#define FLAG_AAA 0x004	//4
#define FLAG_BBB 0x008	//8
#define FLAG_CCC 0x010	//16
#define FLAG_DDD 0x018	//24
#define FLAG_EEE 0x020  //32

struct bitfield{
	unsigned char a4 : 4;
	unsigned char a8 : 8;
	unsigned int a16 : 16;
	unsigned int a24 : 24;
	unsigned int a32 : 32;
}a[32];

void decimal(int a);

int main(void){

	a[32];
	unsigned int b;

	a[32].a4 = 0xf;
	a[32].a8 = 0xff;
	a[32].a16 = 0xfff;
	a[32].a24 = 0xffff;
	a[32].a32 = 0xfffff;

	while(1){
	
	printf("Input Num (4,8,16,24,32) '0' is exit : ");
	scanf("%d", &b);

		switch(b){
		case 4:
			if(FLAG_AAA & a[32].a4)
				printf("Value is 4!\n");
				decimal(a[32].a4);
			break;

		case 8: 
			if(FLAG_BBB & a[32].a8)
				printf("Value is 8!\n");
				decimal(a[32].a8);
			break;

		case 16:
			if(FLAG_CCC & a[32].a16)
				printf("Value is 16!\n");
				decimal(a[32].a16);
			break;

		case 24:
		if(FLAG_DDD & a[32].a24)
				printf("Value is 24!\n");
				decimal(a[32].a24);
			break;


		case 32:
			if(FLAG_EEE & a[32].a32)
				printf("Value is 32!\n");
				decimal(a[32].a32);
			break;

	

		
		case 0:
			return 0;

		default : 
		printf("You need to put it (4,8,16,24,32)\n");
		continue;
	}
	}

	
	return 0;
}

void decimal(int a){
	int cnt =0;
	int arr[1000];
	int i;

	for(i =0; 0 < a ; i++){
		arr[i] = a%2;
		a = a/2;
		cnt++;
	}

	for(i = cnt-1; 0 <= i ; i--){
		printf("%d", arr[i]);
	} 
	printf("\n");
}
