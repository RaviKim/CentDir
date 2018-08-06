#include <iostream>

 

using namespace std;

#define size 7

 

int arr[size][size] =
{
 0, 1, 1, 0, 0, 0, 0,
 1, 0, 0, 1, 1, 0, 0,
 1, 0, 0, 0, 0, 0, 1,
 0, 1, 0, 0, 0, 1, 0,
 0, 1, 0, 0, 0, 1, 0,
 0, 0, 0, 1, 1, 0, 1,
 0, 0, 1, 0, 0, 1, 0
};
int visited[size];


 

/* dfs: 깊이 우선 검색 함수 정의*/
void dfs(int d, int visited[], int n)
{
 int j;
 visited[d] = 1;

 cout << d << " ";

 for (j = 0; j < n; j++)
 {
  if (arr[d][j] == 1 && visited[j] == 0)  // 에지연결 1 이면서 미방문 정점 0 일 때 
  {
   dfs(j, visited, n);                 // 깊이우선 검색하기     
  }
 }
}

 

int main(void)
{
 int x;

 for (x = 0; x < size; x++) // 초기화 
  visited[x] = 0;

 for (x = 0; x < size; x++)
  if (visited[x] == 0)
  {
   dfs(x, visited, size);

  }

 return 0;
}



