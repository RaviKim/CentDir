#include <stdio.h>

typedef int (*FUNP) (int, int);

int add(int d1, int d2) {
	return d1+d2;
}
int sub(int d1, int d2) {
	return d1-d2;
}
int mul(int d1, int d2) {
	return d1*d2;
}
int div(int d1, int d2) {
	if(d2) return d1/d2;
	else { printf("Zero Dived Error!!\n"); return 0; }
}
//index
//
int main(void)
{
	int no, rst;
	FUNP p[]= {&add, &sub, &mul, &div};

	while(1) {
		do {
			printf("\nSelect(1.add, 2.sub, 3.mul, 4.div, 0.quit) => ");
			scanf("%d", &no);
		} while(no<0 || no>4);
		if (no == 0) return 0;
		
		rst = p[no-1](20,10);
		printf("rst => %d\n", rst);
	}

	return 0;
}
