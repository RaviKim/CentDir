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

	static int st_a;	// bss -> �ʱ�ȭ �ȵ� ����
	static int st_b = 1;// data -> �ʱ�ȭ �� ����

	c = a+b;			// code(text)
	k = 2;				// code(text)
	func(c, k);			// stack
	return 0;
}						// stack �Ҹ�

void func(int test, int call)	// stack
{

}



