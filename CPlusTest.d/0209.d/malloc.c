#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*Parameters */
	int num; 
	int* student;

	fputs("Input Student numbers : " , stdout);
	scanf("%d", &num);
	/*Set Dynamic allocation */
	student = (int*)malloc(sizeof(int) * num);

	if(student == NULL)
	{
		printf("There is no Mem. So We can't allocate mem\n");
		return 0;
	}

	printf("Allocated Mem size is : %d\n" , sizeof(int) * num);

	/*Delete memory allocation */
	free(student);

	return 0;
}


