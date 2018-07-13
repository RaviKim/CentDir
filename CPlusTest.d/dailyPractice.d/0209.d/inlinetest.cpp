#include <iostream>
using namespace std;

inline int max(int a, int b) { return (a > b ? a:b); }

int main(void)
{
	int x = 20, y = 80;
	int result;

	result = max(x++ , y++);
	cout << " x = " << x << " y = " << y << endl;
	cout << " result = " << result << endl;
}
