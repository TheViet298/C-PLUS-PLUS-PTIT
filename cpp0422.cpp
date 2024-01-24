#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<int> adj[], int v, bool visited[]) {
    visited[v] = true;
    for (int i = 0; i < adj[v].size(); ++i) {
        if (!visited[adj[v][i]])
            DFS(adj, adj[v][i], visited);
    }
}

bool isConnected(vector<int> adj[], int V) {
    bool visited[V];
    int i;
    for (i = 0; i < V; i++)
        visited[i] = false;
    for (i = 0; i < V; i++)
        if (adj[i].size() != 0)
            break;
    if (i == V)
        return true;
    DFS(adj, i, visited);
    for (i = 0; i < V; i++)
        if (visited[i] == false && adj[i].size() > 0)
            return false;
    return true;
}

int isEulerian(vector<int> adj[], int V) {
    if (isConnected(adj, V) == false)
        return 0;
    int odd = 0;
    for (int i = 0; i < V; i++)
        if (adj[i].size() & 1)
            odd++;
    if (odd > 2)
        return 0;
    if (odd == 2)
        return 1;
    return 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            addEdge(adj, u, v);
        }
        int result = isEulerian(adj, V);
        cout << result << endl;
    }
    return 0;
}

