#include <iostream>
#include <algorithm>

using namespace std;

double Recursive(double Number)
{
	if(Number != 0)
		return Number * Recursive(Number-1);

	return 1;
}

int main(void)
{
	double inPutNum;

	cout << " This is Factorial Test" << endl;

	cin >> inPutNum;

	cout << " Result is : " << Recursive(inPutNum) << endl;
}



