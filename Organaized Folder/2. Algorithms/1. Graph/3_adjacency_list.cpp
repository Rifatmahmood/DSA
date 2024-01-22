/*
  1. one vector, and inside it vector. 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;
  int a[n];
  vector<int> mat[n]; 
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    mat[a].push_back(b);
    mat[b].push_back(a); 
  }

  for (int x: mat[1]) {
    cout << x << " "; 
  }

    return 0;
}