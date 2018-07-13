#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int ari[] = {1, 2, 3, 4, 5};
	list<int> li(&ari[0], &ari[5]);

	list<int>:: iterator it;

	for(it = li.begin(); it != li.end(); it++)
	{
		cout << *it << endl;
	}
}
