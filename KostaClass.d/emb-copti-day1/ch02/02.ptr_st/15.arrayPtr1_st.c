#include <stdio.h>
#if 1
void printData(short (*data)[3], int size)
{
	int i, j;

	for(i=0; i<size; i++) {
	  for(j=0; j<3; j++) {
		printf("%d\n", data[i][j]);
	  }
	}
}
#endif

int main(void)
{
	short a1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	short a2[4][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
	short a3[2][3] = {100, 200, 300, 400, 500, 600};
	//short *p;
	//	p = a1;
//	short[3] *p;
	short (*p)[3];	// short[3] *p ; -> short *p[3] -> 배열과 충돌이니까. -> 이문법에서 가장 중요한것은 포인터 타입 P라는 점이다. 그러므로 포인터 피 타입을 괄호를 친다. -> short (*p)[3];
	p = a1;
//	printf("%p , %p, %p\n", a1, a1+1, a1+2);
//	printf("%p , %p, %p\n", p ,p+1, p+2);
	printf("%p, %p, %p\n");

#if 0	

	p = a1;
	printData(p, 3);
	printf("-------------------------\n");
	p = a2;
	printData(p, 4);
	printf("-------------------------\n");
	p = a3;
	printData(p, 2);
#endif
	return 0;
}
