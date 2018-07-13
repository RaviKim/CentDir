#include <iostream>
using namespace std;

int main()
{
	int ari[] = {1, 2, 3, 4, 5};

	int *it;

	for(it = &ari[0]; it!=&ari[5]; it++)
	{
		cout << *it << endl;
		cout << "Address : " << &*it << endl;
	}
}
