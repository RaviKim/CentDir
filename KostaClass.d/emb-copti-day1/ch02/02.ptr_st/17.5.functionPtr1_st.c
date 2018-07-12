#include <stdio.h>

int add(int d1, int d2) {
	return d1+d2;
}
int sub(int d1, int d2) {
	return d1-d2;
}
int mul(int d1, int d2) {
	return d1*d2;
}
int div(int d1, int d2) {
	if(d2) return d1/d2;
	else { printf("Zero Dived Error!!\n"); return 0; }
}
/*
   struct _info {
   char n[50];
   int a;
   float h;
   };
   typedef struct _info INFO;
   */
typedef struct _info {
	char n[50];
	int a;
	float h;
}INFO;

typedef int(*FUNP)(int, int);

//struct _info d1;

int main(void)
{
	int no, rst;
	//	int (*p)(int, int);//int*p(int, int);//	int(int, int) *p;
	FUNP p;

	while(1) {
		do {
			printf("\nSelect(1.add, 2.sub, 3.mul, 4.div, 0.quit) => ");
			scanf("%d", &no);
		} while(no<0 || no>4);
		if(no == 0)	break;
		switch(no){
			case 1: p = &add; break;
			case 2: p = &sub; break;
			case 3: p = &mul; break;
			case 4: p = &div; break;
		}	

		rst = p(20,10);
		printf("rst => %d\n", rst);
	}

	return 0;
}
