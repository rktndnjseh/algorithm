#include<iostream>
using namespace std;
void dfs(int n, int m, int start, int cnt, int arr[9]) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = start; i < n + 1;i++) {
		arr[cnt] = i;
		dfs(n,m,i + 1, cnt + 1, arr);
	}
}

int main() {
	int n; int m;
	cin >> n>>m;
	int arr[9];
	dfs(n,m,1, 0,arr);

	return 0;
}