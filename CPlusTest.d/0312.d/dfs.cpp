#include<cstdio>
#include<vector>
using namespace std;

vector<vector<int> > adj;
vector<bool> visited;

void dfs(int here){
	printf(" Vertex visit %d!!!", here);
	visited[here] = true;

	for (int i = 0; i < adj[here].size(); i++){
		int next = adj[here][i];
		if (!visited[next])
			dfs(next);
	}
}

int main(){
	visited = vector<bool>(adj.size(), false);
	//모든 정점에서 시작, 이미 방문을 했다면 통과
	for (int i = 0; i < adj.size(); i++){
		if (!visited[i])
			dfs(i);
	}
}
