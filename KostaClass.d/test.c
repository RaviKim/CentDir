#include <stdio.h>
#define MAX(a,b) (a > b) ? a : b

int main(void){
	int A , B = 0;

	A = 10;
	B = 20;

	printf("%d \n" , MAX(A,B));

}
