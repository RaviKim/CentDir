#include <stdio.h>

int main(void){
	void *a;
	double b = 3.14;

	a = &b;

	printf("%.2f \n" ,*(double*)a);
}
