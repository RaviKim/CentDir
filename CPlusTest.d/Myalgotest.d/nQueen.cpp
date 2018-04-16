#if 0
#include <stdio.h>
#include <iostream>
using namespace std;

int g_cnt = 0;
int g_i, g_j = 0;

int gMap[100][100] = { 0, };

//Initializaion, 
void _Init()

{
	for (int i = 0; i < g_cnt; ++i) {
		for (int j = 0; j < g_cnt; ++j)
		{
			gMap[i][j] = 0;
		}
	}
}

void _print()
{

	for (int i = 0; i < g_cnt; ++i) {
		for (int j = 0; j < g_cnt; ++j)
		{
			cout << gMap[i][j] << " ";
		}
		cout << endl;
	}
}

int _Start(int a, int b)
{
	gMap[a][b] = 1;	//	 starting Point
	
	for (int i = 0; i < g_cnt; i++)
	{
		for (int j = 0; j < g_cnt; j++)
		{
			if (gMap[i][j] == 1)
			{
				gMap[i][j] = 0;
				cout << "SET : " << i << j << endl;
			}
		}
	}
	return 0;
}
void _check()
{
}

int main(void)
{
	cin >> g_cnt;
	cin >> g_i >> g_j; // start point

	_Init();	//Initializaion
	_print();
	cout << endl;

	_Start(g_i, g_j);
	_print();

}



#endif


#if 0
#include <stdio.h>
#include <iostream>
using namespace std;

int g_cnt = 0;
int g_i, g_j = 0;

int gMap[100][100] = { 0, };

//Initializaion, 
void _Init()

{
	for (int i = 0; i < g_cnt; ++i) {
		for (int j = 0; j < g_cnt; ++j)
		{
			gMap[i][j] = 0;
		}
	}
}

void _print()
{

	for (int i = 0; i < g_cnt; ++i) {
		for (int j = 0; j < g_cnt; ++j)
		{
			cout << gMap[i][j] << " ";
		}
		cout << endl;
	}
}

int abs(int a, int b)
{
	return a > b ? a - b : b - a;
}

int _Start(int a, int b)
{
	/*if (a*b > g_cnt*g_cnt)
	{
		return 0;
	}*/

	gMap[a][b] = 1;	//	 starting Point


	for (int i = 0; i < g_cnt; i++)
	{
		for (int j = 0; j < g_cnt; j++)
		{
			/*if (gMap[i][j] == 1)
			{
				cout << "Queen near by (" << i << j <<" ) "<< endl;
				cout << "SET Another Position" << endl;
				_check();
			}*/
			/*if (i != a && j != b && abs(i, a) != abs(j, b))
			{
				gMap[i][j] = 1;
				ORL#zA%A
			}
			else
				gMap[i][j] = 0;*/

			if (gMap[i] != gMap[a] && gMap[j] != gMap[b]) {
				if (abs(i, a) != abs(j, b))
					gMap[i][j] = 1;
			}
			else
				gMap[i][j] = 0;
		

		}
	}
	return 0;
}

int main(void)
{
	cin >> g_cnt;
	cin >> g_i >> g_j; // start point

	_Init();	//Initializaion
	_print();
	cout << endl;

	_Start(g_i, g_j);
	_print();

}



#endif


#if 0
#pragma warning(disable : 4996)
#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int cnt = 0;
//	cin >> cnt;
	scanf("%d", &cnt);

	int num = 0;
	int result = 0;

	for( int i = 1; i <= cnt; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			scanf("%d", &num);
			
			result += num;
		}
		int ReResult = (result + 0.5)*10 / 10 + 5;
		//cout << "#"<< i << " " << ReResult/10<< endl;
		printf("#%d %d\n", i, ReResult / 10);
		result = 0;
	}
}
#endif

#if 0
#include <iostream>
using namespace std;

int abs(int a, int b)
{
	if (a > b)
		cout << ">";
	else if (a == b)
		cout << "=";
	else
		cout << "<";
	return 0;
}

int main(void)
{
	int cnt = 0;
	cin >> cnt;

	int a, b = 0;
	
	for (int i = 1; i <= cnt; ++i)
	{
		cin >> a >> b;
		cout << "#" << i << " ";
		abs(a, b);
		cout << endl;
	}
	
}

#endif

#if 0
#include <iostream>
using namespace std;

int main(void)
{
	int cnt = 0;
	int max = 0;

	int num = 0;
	cin >> cnt;
	for (int i = 1; i <= cnt; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cin >> num;
			max < num ? max = num : max = max;
		}
		cout << "#" << i << " " << max << endl;
		max = 0;
	}
}
#endif

#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int cnt ;
	cin >> cnt;

	int * array = new int[cnt+1];
	
	int j = 0;
	int temp = 0;
	for (int i = 0; i <= cnt; ++i)
	{
		array[i]=0;
	}

	for (int i = 0; i < cnt; ++i)
	{
		cin >> array[i];
	}

	for (int i = 0; i < cnt; i++)
	{
		
		if (i - 1 > 0 && i+1 !=cnt) {
			if (array[i] > array[i+1])
			{
				temp = array[i+1];
				array[i] = array[i + 1];
				array[i] = temp;
			}
		}
		cout << array[i] << " ";
	}

	delete[] array;
}


#endif


#if 0
#include <iostream>
using namespace std;
int main(void)
{
	int cnt = 0;
	cin >> cnt;
	
	int *test = new int[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> test[i];
	}

	cout << test[cnt-1];
}
#endif

#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{/*
	vector<int> vi;
	cout << " MAX SIZE = " << vi.max_size() << endl;
	cout << " SIZE = " << vi.size() << endl;
	cout << " Capacity = " << vi.capacity() << endl;

	vi.push_back(123);
	vi.push_back(456);

	cout << " SIZE = " << vi.size() << endl;
	cout << " Capacity = " << vi.capacity() << endl;

	vi.resize(10);
	cout << " SIZE = " << vi.size() << endl;
	cout << " Capacity = " << vi.capacity() << endl;*/

	

}
#endif

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int cnt = 0;
	int num = 0;
	cin >> cnt;
	
	vector <int> vi;
	vector<int>::iterator it;

	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		vi.push_back(num);
	}

	
}

#endif

#if 1
#include <iostream>
#include <stdio.h>
#include <malloc.h>
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
