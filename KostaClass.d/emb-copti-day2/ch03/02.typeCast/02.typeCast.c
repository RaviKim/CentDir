#include <stdio.h>

int main(void)
{
	char c1;
	unsigned char c2;
	int i;
	float f;
	
	printf("0xFFFFFFFF(%%d):%d, 0xFFFFFFFF(%%u):%u\n", 0xFFFFFFFF, 0xFFFFFFFF);
	c1 = 250U;    c2 = 250;
	printf("c1:%u, c2:%d\n", c1, c2);
	printf("c1:%u, c2:%d\n", (unsigned char)c1, c2);
	
	i = 10;    f = 100.1F;
	printf("i(%%i):%d, f(%%f):%.1f\n", i, f);
	printf("i(%%f):%.1f, f(%%f):%.1f\n", i, f);
	printf("i(%%i):%d, f(%%i):%i\n", i, f);
	printf("cast=>i(%%f):%.1f, f(%%i):%i\n", (float)i, (int)f);
	
	printf("sum:%d, avg:%.1f\n", 30+31+30, (30+31+30)/3);
	printf("cast=>sum:%d, avg:%.1f\n", 30+31+30, (float)(30+31+30)/3);

	return 0;
}
