#include <iostream>
using namespace std;


int main(void)
{
	int testA , testB =0;


	for( int i = 0; i < 10; i++)
	{
		testA += i;
		testB += i+testA;
	}

	cout << "Test A is : " << testA << endl;
	cout << "Test B is : " << testB << endl;

}
