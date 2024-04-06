#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

#define N_MAX 1001

vector<pair<int, int>> graph[N_MAX];
bool visited[N_MAX];
int N, M;

void dfs(int start, int end, int distance, int& answer) {
    visited[start] = true;
    for (auto& edge : graph[start]) {
        int next = edge.first;
        int nextDistance = distance + edge.second;
        if(!visited[next]) {
            if (next == end) {
                answer = nextDistance;
                return;
            }
            dfs(next, end, nextDistance, answer);
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N - 1; i++) {
        int n1, n2, d;
        cin >> n1 >> n2 >> d;
        graph[n1].push_back(make_pair(n2, d));
        graph[n2].push_back(make_pair(n1, d));
    }

    for (int i = 0; i < M; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        memset(visited, false, sizeof(visited)); // 방문 배열 초기화
        int answer = 0;
        dfs(n1, n2, 0, answer);
        cout << answer << endl;
    }

    return 0;
}
