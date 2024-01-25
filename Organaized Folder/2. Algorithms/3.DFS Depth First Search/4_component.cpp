#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 5; 
vector<int> v[n];
bool vis[n]; 

void dfs(int src) {
  cout << src << endl;
  vis[src] = true; 
  for(int neighbor: v[src]) {
    if(vis[neighbor] == false) {
      dfs(neighbor); 
    }
  }
}
int main()
{
  int n, e;
  cin >> n >> e; 
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a); 
  }

  memset(vis, false, sizeof(vis));
  for (int i = 0; i < n; i++)
  {
    if(!vis[i]) {
      dfs(i); 
    }
  }
  

 return 0;
}