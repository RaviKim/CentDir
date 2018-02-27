#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename IT>
void Print(IT s, IT e)
{
	IT it;
	for(it=s ; it!=e; it++)
	{
		cout << *it << endl;
	}
}

int main()
{
int ari[] = {1,2,3,4,5};
vector<int> vi(&ari[0], &ari[5]);
list<int> li(&ari[0], &ari[5]);

Print(&ari[0], &ari[5]);
Print(vi.begin(), vi.end());
Print(li.begin(), li.end());
}
