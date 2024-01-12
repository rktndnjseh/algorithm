#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> graph[100001];
bool visited[100001] = { 0, };
int order[100001] = { 0, };
int cnt = 1;
void dfs(int r) {
	if (visited[r]) {
		return;
	}
	visited[r] = true;
	order[r] = cnt++;
	for (int i = 0; i < graph[r].size(); i++) {
		if (!visited[graph[r][i]]) {
			dfs(graph[r][i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, r;

	scanf("%d %d %d", &n, &m, &r);
	for (int i = 1; i <= m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(r);
	for (int i = 1; i <= n; i++) {
		printf("%d\n", order[i]);
	}

	return 0;
}
