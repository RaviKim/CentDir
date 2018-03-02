#include <iostream>
using namespace std;

template <typename T> T Max (T num1, T num2)
{
	return num1 > num2 ? num1 : num2;
}


int main()
{
// Parameter
	int num1, num2;

	cin >> num1 >> num2;

	int CompareMax = Max(num1, num2);

	cout << "Max number is : " << CompareMax << endl;
}
