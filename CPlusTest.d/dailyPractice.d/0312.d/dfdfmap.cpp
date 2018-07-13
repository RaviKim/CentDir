#include <iostream>
using namespace std;


int n;
int g_min;
int map[10][10];


void DFS(int x, int y, int l)
{
	if(x == n -1 && y == n-1)
	{
		if(g_min > l) g_min = l;
		return;
	}

	map[y][x] = 0;

	if( y > 0 && map[y-1][x] !=0) DFS(x, y-1, l+1);
	if( y < n-1 &&  map[y+1][x] !=0) DFS(x, y+1, l+1);
	if( x > 0 && map[y][x-1] !=0) DFS( x-1, y, l+1);
	if( x < n-1 && map[y][x+1] !=0) DFS (x+1, y, l+1);

	map[y][x] = 1;
}

int main()
{
	int i, j;

	cin >> n;
	g_min = n * n;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			cin >> map[i][j];

	DFS(0,0,1);

	cout << "Shotest way is : " << g_min << endl;


}



