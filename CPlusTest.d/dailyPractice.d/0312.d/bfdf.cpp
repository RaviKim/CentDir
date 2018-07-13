#include<iostream>
#include<algorithm>	//sort 함수를 출력하기 위한 헤더
#include<vector>
#include<queue>
using namespace std;

int n, m, v;	//n : vertex(정점)의 개수, m : edge(간선)의 개수, v : 정점의 번호
vector<vector<int> > adj;	//vector-vector를 선언
vector<bool> visited;		//node의 방문 여부에 대한 함수


int s, e;		//s : start(시작지점), e : end(끝지점)


void dfs(int node) {
	visited[node] = true;	//dfs 함수에 들어오면, node의 방문 여부를 체크
	printf("%d ", node);		//방문한 node의 값을 출력

	for (int i = 0; i < adj[node].size(); i++) {
		int next = adj[node][i];		//adj[node][i] : vector의 [node]번째 내의 i번째 인자

		if (visited[next] == false) {
			dfs(next);		//재귀함수
		}
	}
}


void bfs(int node) {
	queue<int> qsearch;

	visited[node] = true;	//bfs 함수에 들어오면, node의 방문 여부를 체크
	qsearch.push(node);		//node의 값을 queue에 push.

	while (!qsearch.empty()) {	//queue가 비어있을 때 까지

		int here = qsearch.front();		//queue의 head의 값을 -> here로 임시 저장


		printf("%d ", here);	//head의 값을 출력
		qsearch.pop();		//출력한 head는 버린다

		for (int i = 0; i < adj[here].size(); i++) {	//vector [here]번째의 크기
			int next = adj[here][i];		//vector [here]번째 내의 i번째 인자

			if (!visited[next]) {			//i번째 인자가 방문되어지지 않았다면,
				visited[next] = true;		//i번째 인자의 방문여부->true
				qsearch.push(next);			//queue에 i번째 인자의 값을 push
			}
		}
	}
}



int main() {
	scanf("%d %d %d", &n, &m, &v);
	adj.resize(n + 1);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &s, &e);
		adj[s].push_back(e);
		adj[e].push_back(s);
	}

	visited = vector<bool>(n + 1, false);
	for (int i = 0; i < adj.size(); i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	dfs(v);

	visited = vector<bool>(n + 1, false);
	printf("\n");
	bfs(v);

	return 0;
}
