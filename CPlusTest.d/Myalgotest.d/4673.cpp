#include <iostream>
using namespace std;

bool arr[10001];

int _calcul_1(int num) {
	int sum = num;
	while (1) {
		if (num == 0)break;
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main(void)
{
	int cnt = 1; 
	int count = 0;
	
	int *Array = new int[10001];
	

	for (int i = 0; i < 10001; i++) {
		Array[i] = _calcul_1(i);
		if (Array[i] <= 10000) {
			arr[Array[i]] = true;
		}
	}
	
	for (int i = 1; i < 10001; i++) {
		if (!arr[i]) cout << i << endl;
	}

	delete[] Array;
}

