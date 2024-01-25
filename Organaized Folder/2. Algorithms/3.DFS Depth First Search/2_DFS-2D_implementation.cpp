#include <bits/stdc++.h>
using namespace std;

// Global array to represent the grid
char a[20][20];

// Array to track visited cells
bool vis[20][20];

// Vector representing directions: right, left, up, down
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// Variables to store the number of rows and columns
int row, col;

// Function to check if a cell is within the grid
bool valid(int i, int j) {
  return (i >= 0 && i < row && j >= 0 && j < col);
}

// Depth-First Search (DFS) function
void dfs(int si, int sj) {
  // Print the current cell
  cout << si << " " << sj << endl;

  // Mark the current cell as visited
  vis[si][sj] = true;

  // Explore neighbors in all four directions
  for (int i = 0; i < 4; i++) {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;

    // Check if the neighbor is valid and not visited
    if (valid(ci, cj) && !vis[ci][cj]) {
      // Recursively call DFS on the neighbor
      dfs(ci, cj);
    }
  }
}

int main() {
  // Input the number of rows and columns
  cin >> row >> col;

  // Input the grid
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> a[i][j];
    }
  }

  // Input the starting position
  int si, sj;
  cin >> si >> sj;

  // Initialize the visited array
  memset(vis, false, sizeof(vis));

  // Call DFS from the starting position
  dfs(si, sj);

  return 0;
}
