#include <iostream>


using namespace std;

#define size 7

int arr[size][size]=
{
0,1,1,0,0,0,0,
1,0,0,1,1,0,0,
1,0,0,0,0,0,1,
0,1,0,0,0,1,0,
0,1,0,0,0,1,0,
0,0,0,1,1,0,1,
0,0,1,0,0,1,0
};

int visited[size];

void dfs(int d, int visited[], int n){
	int j;
	visited[d] = 1;
	cout <<d<<" ";
	for(j=0; j<n; j++){
		if(arr[d][j] ==1 && visited[j] ==0){
			dfs(j, visited, n);
		}
	}

}


int main(void){
	int x;
	for(x=0; x<size; x++)
		visited[x] = 0;
	for(x=0; x< size; x++)
		if(visited[x] ==0){
			dfs(x, visited, size);
		}
	return 0;
}
