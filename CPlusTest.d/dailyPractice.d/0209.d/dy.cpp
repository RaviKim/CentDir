#include <iostream>


int num = 1; 			// data(rw)
int count;				// bss

char *str;				// bss
const int i = 10;		// data(ro)

int main()
{
	int k , a = 1;		// stack
	char *ptr;			// stack

	ptr = malloc(4);	// heap

	static int st_a;	// bss -> 초기화 안된 변수
	static int st_b = 1;// data -> 초기화 된 변수

	c = a+b;			// code(text)
	k = 2;				// code(text)
	func(c, k);			// stack
	return 0;
}						// stack 소멸

void func(int test, int call)	// stack
{

}



