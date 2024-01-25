#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 1e5 + 5;
vector<int> v[MAX_NODES];
bool vis[MAX_NODES];

// Depth-First Search (DFS) function
void dfs(int src) {
  // Print the current node
  cout << src << endl;

  // Mark the current node as visited
  vis[src] = true;

  // Traverse neighbors of the current node
  for (int neighbor : v[src]) {
    // If the neighbor is not visited, recursively call DFS
    if (!vis[neighbor]) {
      dfs(neighbor);
    }
  }
}

int main() {
  int nodes, edges;
  cin >> nodes >> edges;

  // Input edges and construct the adjacency list
  while (edges--) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  // Initialize the visited array
  memset(vis, false, sizeof(vis));

  // Start DFS from node 0
  dfs(0);

  return 0;
}
