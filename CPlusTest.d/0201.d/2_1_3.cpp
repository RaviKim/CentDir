#include <iostream>
using namespace std;

int SwapPointer(int *&num1, int *&num2)
{
	int  *temp;
	temp 	=	num1;
	num1 	=	num2; 
	num2	= 	temp;

}



int main(void)
{
	/*Declaration*/
	int num1	=	5;
	int *ptr1	=	&num1;
	int num2	=	10;
	int *ptr2	=	&num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}
