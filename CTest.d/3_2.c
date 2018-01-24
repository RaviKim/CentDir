#include <stdio.h>

void Factorial(int *a);

int main(void){
	int num1;
	printf("Input Num what you want to know factorial func! : ");
	scanf("%d", &num1);

	Factorial(&num1);
	return 0;
}

void Factorial(int *a){
	int cnt;
	int result =1;
	for(cnt = 1; cnt <= *a; cnt ++){
		result *= cnt;
	}

	printf("result is : %d\n", result);
}
