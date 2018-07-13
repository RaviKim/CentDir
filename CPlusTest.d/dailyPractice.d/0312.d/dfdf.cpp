#include <iostream>
using namespace std;


int n;
int map[30][30], visit[30];

void DFS(int v)
{
	int i;
	visit[v] = 1;
	for(i = 1; i<=n; i++)
	{
		if(map[v][i] == 1 && !visit[i])
		{
		 cout << v <<"move to " << i << endl;
		 DFS(i);
		}
	}
}


int main()
{
	int start;
	int v1, v2;
	

	cin >> n >> start;

	while(1)
	{
		std::cin >> v1 >> v2;

		if(v1 == -1 && v2 == -1) break;
		map[v1][v2] = map[v2][v1] = 1;
	}
	DFS(start);

	return 0;
}
