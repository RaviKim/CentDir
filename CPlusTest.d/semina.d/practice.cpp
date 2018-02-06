#include <iostream>
using namespace std;



int main(void)
{
	int cnt=0;
	int result;
	int saveMem[10000];

	cout << "Input Num : ";
	cin >> cnt;

	for (int i = 1,j=0 ; i < cnt ; i++)
	{
		if( i % 3 == 0 || i % 5 == 0)
		{
			saveMem[j] = i;
			j++;
			result+=i;
		}
	}
	cout << endl;
	for(int i = 0; i < cnt ; i++)
	{
		cout << saveMem[i];
		cout << " ";
	}
	cout << endl;
	cout << "Result is : " << result << endl;
}
