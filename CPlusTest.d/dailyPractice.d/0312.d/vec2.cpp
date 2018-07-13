#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	vector<int> vi;
	for( int i = 0; i < 80; i++)
	{
		vi.push_back(i);
	}

	vector<int>::iterator it;
	it=find(vi.begin(), vi.end(), 55);

	vector<int>::iterator findKey;
	int key;
	cin >> key;
	findKey = find(vi.begin(), vi.end(), key);

	cout << " Find num : " << *findKey << endl;

	cout << *it << endl;
	vi.erase(it+1);
	cout << *it << endl;
}

