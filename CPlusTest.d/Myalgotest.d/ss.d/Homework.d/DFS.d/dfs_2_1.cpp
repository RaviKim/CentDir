#include <stdio.h>
#include <iostream>
#define MAX 10 
 
using namespace std;

//int Min=MAX*MAX;
int N, M = 0;
int Min = N*M;
char Map[MAX][MAX];
int Visit[MAX][MAX];
int Dir[4][2] = {{0, 	1},
				 {1, 	0}, 
				 {0, 	-1}, 
				 {-1,	 0}};
void input()
{
    int i, j;
//    scanf("%d %d", &N, &M);    //N세로 M가로
	cin >> N >> M;
    for(i=0; i<N; i++)
    {
	//      scanf("%s", Map[i]);
	//  cin >> Map[i];
		for(j = 0; j < M; j++){
			cin >> Map[i][j];
		}
    }
}
 
void dfs(int y, int x, int depth)
{
    int i, j;
    int wX, wY;
    if(x < 0 || y < 0 || y >= N || x >= M)    //맵의 범위를 벗어 날때
        return;
    if(y == 0 && x == M-1)    //도착할때
    {
        if(depth < Min)
            Min = depth;
        return;
    }
 
    for(i = 0; i < 4; i++)
    {
        wX = x + Dir[i][0],
        wY = y + Dir[i][1];
        if(Visit[wY][wX] == 0 && Map[wY][wX] == '0')
        {
            Visit[wY][wX]  = 1;
            
            dfs(wY, wX, depth+1);
            Visit[wY][wX]  = 0;
        }
    }
}
 
int main(void)
{
    input();
    dfs(N-1, 0, 1);
    if(Min == 0)
        printf("%-1\n");
    else
        printf("%d\n", Min);
    return 0;
}


