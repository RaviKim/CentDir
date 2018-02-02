#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int a)
{
	cout << a << endl;
}

int main()
{
	int i, cnt;
	int a_size;	// set array size

	cout << " Input array size : ";
	cin >> a_size;
	vector <int> array(a_size);

	cout << " Input array parameter : ";
	for( i = 0; i < a_size; i++)
		cin >> array[i];

	sort(array.begin(), array.end());
	for_each(array.begin(), array.end(), print);

}
