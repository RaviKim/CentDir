#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;	// input Parameter
	int M; 	// checkSum
	int cnt= 0;
	int * MemArray = new int [100];
	cin >> N;

	for(M = 2; M <= N; M++)
	{
		if( N % M == 0){
			MemArray[cnt] = M;
			cnt++;
		}
	}

	for(int i = 0; i < sizeof(MemArray) / sizeof(int) ; i++)
	{
		cout << MemArray[i] << endl;
	}

	cout << "----------------------" << endl;

}
