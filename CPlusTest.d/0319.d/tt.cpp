#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;	// input Parameter
	int M; 	// checkSum

	cin >> N;
	int test = N;
	
	for(M = 2; M <= N; M++)
	{
		//int test = N;
		for(int i = 0; i <= N ; i++){
			if( N % M == 0){
				cout << M << endl;
				N = N/M;
			}

		}
	}
}

