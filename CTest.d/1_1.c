#include <stdio.h>

int main(void){
	int arr[5]={1,2,3,4,5};
	int *ptr;

	ptr = arr;

	printf("%d\n", *ptr+5/2);
}
