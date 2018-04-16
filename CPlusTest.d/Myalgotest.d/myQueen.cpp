#if 1
#include <iostream>
#include <stdio.h>
using namespace std;

int map[20][20] = { 0, };
int cnt = 0;
int a, b = 0;
int qcount = 0;

void _print()
{
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Print End line ------------" << endl;
}

void _input()
{
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt; j++)
		{
			cin >> map[i][j];
		}
	}
}

int _abs(int num1, int num2)
{
	return num1 > num2 ? num1 - num2 : num2 - num1;
}


int _check(int x, int y)
{
	if (map[x][y] == 1)
	{
		//for (int num = 0; num < cnt; num++)
		//{
		//	if (map[x][y] != map[x][num]) map[x][num] = 2;	// 가로 
		//	if (map[x][y] != map[num][y]) map[num][y] = 3;	// 세로
		//	if(num-x == num-y) map[num][num] = 4; // cross line
		//}
		
		_print();// find starting point.

		for (int i = 0; i < cnt; i++)
		{
			for (int j = 0; j < cnt; j++)
			{
				if(map[x][y] != map[i][j] && y!=j) map[x][j] = 0; // 가로 
				_print();
				if (map[x][y] != map[i][j] && x != j) map[j][y] = 0; // 세로
				_print();
				if (_abs(i, x) != _abs(j, y) && x != y) map[i][j] = 0;
				_print();
				
					if (_abs(i, x) != _abs(j, y) && x == y)
				{
					map[i][j] = 1; //can go
					_print();
					qcount++;
				
				
				
				}
			}
		}

	}

	if (x == cnt)
		return 0;
	else
		return _check(x+1, y);
	
	
}


int _start(int x, int y)
{
	map[x][y] = 1;	// starting point.
	_check(x,y);

	return 0;
}


int main(void)
{
	cin >> cnt; // make cnt*cnt array.
	_print();

	/*for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt; j++)
		{
			_start(i, j);
		}
	}*/
	
	_start(0,0);
	_print();

	

	
}

#endif
