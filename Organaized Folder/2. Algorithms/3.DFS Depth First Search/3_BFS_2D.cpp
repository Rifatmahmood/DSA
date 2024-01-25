#include <bits/stdc++.h>
using namespace std;
char a[20][20];
bool vis[20][20];
int dis[20][20];
int row, col;


vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
  return (i >= 0 && i < row && j >= 0 && j < col);
}
void bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  vis[si][sj] = true;
  dis[si][sj] = 0; 
  while (!q.empty())
  {
    pair<int, int> current = q.front();
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int ci = current.first + d[i].first;
      int cj = current.second + d[i].second;

      // Check if the neighbor is valid and not visited
      if (valid(ci, cj) && !vis[ci][cj])
      {

        q.push({ci, cj});
        vis[ci][cj] = true;
        dis[ci][cj] = dis[current.first][current.second] + 1;
      }
    }
  }
}

int main()
{
  int row, col;
  cin >> row >> col;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> a[i][j];
    }
  }

  int si, sj;
  cin >> si >> sj;
  memset(vis, false, sizeof(vis));
  memset(dis, -1, sizeof(dis));
  bfs(si, sj);
  cout << dis[0][3]; 
  return 0;
}