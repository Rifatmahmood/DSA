#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  while (q != 0)
  {
    string binary;
    cin >> binary;
    stack<char> st;

    for (char digit : binary)
    {
      if (digit == '0')
      {
        st.push(digit);
      }
      else
      {
        if (digit == '1')
        {
          if (st.empty())
          {
            st.push(digit);
          }
          else
          {
            if (!st.empty() && st.top() == '0')
            {
              st.pop();
            }
          }
        }
      }
    }

    if (st.empty())
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
    q--;
  }

  return 0;
}