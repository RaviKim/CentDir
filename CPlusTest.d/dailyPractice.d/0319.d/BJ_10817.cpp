#include <iostream>
#include <algorithm>
using namespace std;

int cntArray[3];
int Compare(int a, int b, int c)
{

	cntArray[0] = a;
	cntArray[1] = b;
	cntArray[2] = c;

	sort(cntArray, cntArray+3);

	cout << cntArray[1];
	return 0;
}

int main(void)
{
////////////////////
// Parameter Declaration
// int A, B, C is compare parameter
// int cnt is Count
//////////////////


	int A, B, C;
	int cnt;

	cin >> A >> B >> C;
	Compare(A, B, C);

}
