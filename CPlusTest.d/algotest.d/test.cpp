#include <iostream>
using namespace std;

int main() {
	int a=0;
	char num[100], temp[100];

	cin >> num;

	for (int i = 0; num[i]!=0; i++) {
		a++;
	}
	a -= 1;
//	cout << num[a]<<"\n";

	for (int i = 0; a > 0; a--,i++) {
		if (a - i == 1 || a==i)
			break;
		* temp = num[a];
		num[a] = num[i];
		num[i] = * temp;
	}
	cout << num;
}


