#include<iostream>
#include<algorithm>	//sort �Լ��� ����ϱ� ���� ���
#include<vector>
#include<queue>
using namespace std;

int n, m, v;	//n : vertex(����)�� ����, m : edge(����)�� ����, v : ������ ��ȣ
vector<vector<int> > adj;	//vector-vector�� ����
vector<bool> visited;		//node�� �湮 ���ο� ���� �Լ�


int s, e;		//s : start(��������), e : end(������)


void dfs(int node) {
	visited[node] = true;	//dfs �Լ��� ������, node�� �湮 ���θ� üũ
	printf("%d ", node);		//�湮�� node�� ���� ���

	for (int i = 0; i < adj[node].size(); i++) {
		int next = adj[node][i];		//adj[node][i] : vector�� [node]��° ���� i��° ����

		if (visited[next] == false) {
			dfs(next);		//����Լ�
		}
	}
}


void bfs(int node) {
	queue<int> qsearch;

	visited[node] = true;	//bfs �Լ��� ������, node�� �湮 ���θ� üũ
	qsearch.push(node);		//node�� ���� queue�� push.

	while (!qsearch.empty()) {	//queue�� ������� �� ����

		int here = qsearch.front();		//queue�� head�� ���� -> here�� �ӽ� ����


		printf("%d ", here);	//head�� ���� ���
		qsearch.pop();		//����� head�� ������

		for (int i = 0; i < adj[here].size(); i++) {	//vector [here]��°�� ũ��
			int next = adj[here][i];		//vector [here]��° ���� i��° ����

			if (!visited[next]) {			//i��° ���ڰ� �湮�Ǿ����� �ʾҴٸ�,
				visited[next] = true;		//i��° ������ �湮����->true
				qsearch.push(next);			//queue�� i��° ������ ���� push
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
