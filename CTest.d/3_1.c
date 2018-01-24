#include <stdio.h>

void cal(int *a, int *b);

int main(void){
	int num1, num2;

	fputs("input Two Numbers :", stdout);
	scanf("%d%d", &num1, &num2);

	cal(&num1, &num2);

	return 0;
}

void cal (int *a, int *b){
printf("Add is :%d\n", *a+*b);
printf("Multiple is :%d\n", *a * *b);
}
