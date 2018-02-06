#include <iostream>
using namespace std;

int g_val1 = 100;

int main(void)
{
	int g_val1 = 20;
	g_val1 += 3;
	cout << g_val1 << endl;

	::g_val1 +=3;
	cout << ::g_val1 << endl;

}

