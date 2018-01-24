#include <stdio.h>

void Factorial(int *a, int *b);

int main(void){
	int num1;
	int result=0;
	printf("Input Num what you want to know factorial func! : ");
	scanf("%d", &num1);
	Factorial(&num1,&result);

	printf("result is : %d\n", result);
	return 0;
}

void Factorial(int *a, int *b){
	int cnt = 1;
	int result = 1;
	for(cnt; cnt <= *a; cnt++){
		result *= cnt;
	}
	*b = result;// return result 
}
