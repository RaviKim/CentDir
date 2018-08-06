#include <iostream>
using namespace std;

int n, m;
int Minimum;
int map[10][10];

int DFS(int x, int y, int depth){
	if(x == n-1 && y == m-1){
		if(Minimum > depth){
			Minimum = depth;
		}
//			return;
	}
	if(map[n][m] == 0) return -1;

	map[y][x] = 0; 	// Visit.

	if(y > 0 	&& map[y-1][x] != 0)	DFS(x, y-1, depth +1);	// up
	if(y < m-1	&& map[y+1][x] != 0)	DFS(x, y+1, depth +1);	// down
	if(x > 0 	&& map[y][x-1] != 0)	DFS(x-1, y, depth +1);	// left
	if(x < n-1 	&& map[y][x+1] != 0)	DFS(x+1, y, depth +1);	// right

	map[y][x] = 1;	// return Visit.
}


int main(void){
	int i , j;

	cin >> n >> m;
	Minimum = n*m;

	for(i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			cin >> map[i][j];
		}
	}

	DFS(0,0,1);
	cout << "-/-/-/-/-/-/-/-/-/" << endl;
	cout << " Result is : " << Minimum-1 << endl;
	return 0;
}
