#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test; 
  while (test--)
  {
    int n;
    cin >> n;
    set<int> s; 
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      s.insert(x); 
    }


     for (int i : s) {
        cout << i << ' ' ;
        }

        cout << '\n';
  }

  return 0;
}