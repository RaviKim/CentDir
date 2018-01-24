#include <stdio.h>

int main(void){
	char a= 'C';
	int b= 10;
	double c= 3.14;

	char *pA = &a;
	int *pB = &b;
	double *pC = &c;

	printf("char parameter increase %c \n", *pA+1);
	printf("int parameter increase %d\n" , *pB+1);
	printf("double parameter increase %f\n", *pC +1);

}
