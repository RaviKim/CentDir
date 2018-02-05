#include <stdio.h>

int main(void)
{
	int val1;
	int val2;

	printf("Input First number : ");
	scanf("%d", &val1);

	printf("Input Second number : ");
	scanf("%d", &val2);

	int result = val1 +val2;
	printf("Add Result is : %d\n", result);
}
