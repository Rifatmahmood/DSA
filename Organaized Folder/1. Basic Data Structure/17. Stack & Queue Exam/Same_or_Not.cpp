#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  int flag = 1;
  cin >> n >> m;
  stack<int> st;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  queue<int> q;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  if (n != m)
  {
    flag = 0;
  }
  else
  {
    while (!st.empty())
    {
      if (st.top() != q.front())
      {
        flag = 0;
        break; 
      }
      else
      {
        st.pop();
        q.pop();
      }
    }
  }

  if (flag)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}