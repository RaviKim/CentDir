#include <iostream>
#include <math.h>

using namespace std;


int main(void)
{
	unsigned int A = 2;
	unsigned int B;

	cin >> B;

	while( A <= (double)sqrt(B))
	{
		for( A; A <= (double)sqrt(B); A++)
		{
			if( B % A == 0)
			{
				cout << A << endl;
				B = B/A;
				break;
			}
		}
	}
	cout << B << '\n';
	return 0;


}
