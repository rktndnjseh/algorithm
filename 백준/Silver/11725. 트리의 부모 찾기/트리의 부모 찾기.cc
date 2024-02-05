#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100000;

vector<int> tree[MAX + 1]; 
int parent[MAX + 1]; 

void dfs(int node, int par) {
    parent[node] = par;  

    for (int i = 0; i < tree[node].size(); i++) {
        int next = tree[node][i];

        if (next != par) {
            dfs(next, node); 
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0);
    for (int i = 2; i <= N; i++) {
        cout << parent[i] << '\n';  
    }

    return 0;
}
