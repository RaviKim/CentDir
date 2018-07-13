#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	int *d;

	d = new int;

	*d = 21;

	cout << "Type a number : " ;
	cin >> *d;

	cout << *d +5 << endl;

	delete d;

	d = new int[15];
	d[0] = 1234;
	d[1] = d[0] + 1234;

	cout << d[0] << " : " << d[1] << " : " << d[2] << endl;

	delete[] d;

	return 0;
}
