#include <iostream>
using namespace std;

void SwapTest(int &num1, int &num2)
{
	int temp;
	
	temp	=	num1;
	num1	=	num2;
	num2	=	temp;
}

int Change(int &num)
{
	num *=	-1;
}

int AddVal(int &num)
{
	return num++;
}

int main(void)
{
	cout << "This is a test 2_1_1!! " << endl;

	int val1	=	10;
	int val2	=	20;

	SwapTest(val1, val2);

	cout << val1 << endl;
	cout << val2 << endl;
	
	int test1;
	int test2	=	100;

	Change(test1);
	AddVal(test2);

	cout << "------------------" << endl;
	cout << test1 << endl;
	cout << test2 << endl;

	return 0;
}

