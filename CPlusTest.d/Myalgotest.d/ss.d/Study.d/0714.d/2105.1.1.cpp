#include <iostream>
#include <cstring>

using namespace std;

#define MAX_MAP_SIZE 20

int R,C; // 시작 행, 열 저장 변수
int T, N;// Testcase , N by N Array.
int ans; // result.


int drow[4] = {1,1,-1,-1}; // 0:오른쪽 아래, 1:왼쪽 아래, 2:왼쪽 위, 3:오른쪽 위
int dcol[4] = {1,-1,-1,1};

int map[MAX_MAP_SIZE][MAX_MAP_SIZE];
bool check[MAX_MAP_SIZE][MAX_MAP_SIZE];
bool disert[101];


void init_map()
{
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin >> map[i][j];
		}
	}
}

void go(int row, int col, int dir, int cnt)
{
	if(dir == 4)
	{
		ans = max(ans,cnt);
		return;
	}

	if(dir == 0) // 오른쪽아래 방향으로 올 경우
	{
		for(int i=0; i<=1; i++)
		{
			int nrow = row + drow[i];
			int ncol = col + dcol[i];

			if(nrow == R && ncol == C)
			{
				go(nrow,ncol,4,cnt+1);
			}
			else if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < N && check[nrow][ncol] == false && disert[map[nrow][ncol]] == false)
			{
				check[nrow][ncol] = true;
				disert[map[nrow][ncol]] = true;
				go(nrow,ncol,i,cnt+1);
				check[nrow][ncol] = false;
				disert[map[nrow][ncol]] = false;
			}
		}
	}
	else if(dir == 1) // 왼쪽아래 방향으로 올 경우
	{
		for(int i=1; i<=2; i++)
		{
			int nrow = row + drow[i];
			int ncol = col + dcol[i];
			if(nrow == R && ncol == C)
			{
				go(nrow,ncol,4,cnt+1);
			}
			else if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < N && check[nrow][ncol] == false && disert[map[nrow][ncol]] == false)
			{
				check[nrow][ncol] = true;
				disert[map[nrow][ncol]] = true;
				go(nrow,ncol,i,cnt+1);
				check[nrow][ncol] = false;
				disert[map[nrow][ncol]] = false;
			}
		}
	}
	else if(dir == 2) // 왼쪽 위 방향으로 올 경우
	{
		for(int i=2; i<=3; i++)
		{
			int nrow = row + drow[i];
			int ncol = col + dcol[i];
			if(nrow == R && ncol == C)
			{
				go(nrow,ncol,4,cnt+1);
			}
			else if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < N && check[nrow][ncol] == false && disert[map[nrow][ncol]] == false)
			{
				check[nrow][ncol] = true;
				disert[map[nrow][ncol]] = true;
				go(nrow,ncol,i,cnt+1);
				check[nrow][ncol] = false;
				disert[map[nrow][ncol]] = false;
			}
		}
	}
	else if(dir == 3) // 오른쪽 위 방향으로 올 경우
	{
		for(int i=3; i<4; i++)
		{
			int nrow = row + drow[i];
			int ncol = col + dcol[i];
			if(nrow == R && ncol == C)
			{
				go(nrow,ncol,4,cnt+1);
			}
			else if(nrow >= 0 && nrow < N && ncol >= 0 && ncol < N && check[nrow][ncol] == false && disert[map[nrow][ncol]] == false)
			{
				check[nrow][ncol] = true;
				disert[map[nrow][ncol]] = true;
				go(nrow,ncol,i,cnt+1);
				check[nrow][ncol] = false;
				disert[map[nrow][ncol]] = false;
			}
		}
	}
}

int main()
{
	cin >> T;
	for(int z=1; z<=T; z++)
	{
		cin >> N;

		ans = -1;
		init_map();
		for(int i=0; i<N; i++) // 시작 row:i, col:j
		{
			for(int j=0; j<N; j++)
			{

				memset(check,false,sizeof(check));
				memset(disert,false,sizeof(disert));

				R = i;
				C = j;
				disert[map[i][j]] = true;
				go(i,j,0,0);
				disert[map[i][j]] = false;
			}
		}

		cout << "#" << z << ' ' << ans << '\n';
	}

	return 0;
}
