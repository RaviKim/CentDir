#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdio>
using namespace std;


int main()
{
	int ari[] = {1,2,3,4,5};
	vector <int> vi(&ari[0], &ari[5]);
	list <int> li(&ari[0], &ari[5]);

	puts(find(vi.begin(), vi.end(), 4)	==	vi.end() ? "NO" : "YES");
	puts(find(li.begin(), li.end(), 8) 	==	li.end() ? "NO" : "YES");
	puts(find(&ari[0] , &ari[5], 3)		==	&ari[5] ? "NO" : "YES");


	vector <int> :: iterator iter;
	iter = find(vi.begin(), vi.end(), 4);
	cout << *iter << endl;
}
