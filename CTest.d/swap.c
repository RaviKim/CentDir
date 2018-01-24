#include <stdio.h>

void swap(int *a, int *b);

int main(void){
	int x = 10, y = 20;
	printf("First value x is : %d, y is : %d\n", x, y);
	swap(&x, &y);
	printf("x = %d, y = %d\n", x,y);
	return 0;

}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("Change x is : %d, y is : %d\n", *a, *b);
}
