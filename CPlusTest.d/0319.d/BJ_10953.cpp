#include <iostream>
using namespace std;


int main(void)
{
	int A, B = 0;
	int addResult[100]= {0,};

	int cnt = 0;
	cin >> cnt;

	char ch; // ,
	for(int i = 0; i < cnt; i++)
	{
		cin >> A;
		cin >> ch;
		cin >> B;
		addResult[i] = A+B;
	}

	for(int i= 0; i < cnt; i++)
	{
		cout << addResult[i];
		cout << endl;
	}

	

}
