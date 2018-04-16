#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main(void)
{
	int cnt = 0;
	int temp = 0;
	int i = 0;
	cin >> cnt;
	int * array = new int[cnt];

	for( int i = 0; i < cnt; ++i)
	{
		cin >> array[i];
	}

	while(cnt--)
	{
		cout << array[i++] << " " ;
	}

	for ( int i = 0; i < cnt; ++i)
	{
		if( array[i] == cnt)
		{
			temp = array[i];
			array[i] = array[i-1];
			array[i-1] = temp;
		}
	}

	/*
	while(cnt--)
	{
		cout << array[i++] << " " ;
	}
*/
}
