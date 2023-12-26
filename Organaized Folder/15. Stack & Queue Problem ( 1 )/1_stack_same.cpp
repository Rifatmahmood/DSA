#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  list<int> l;
  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    l.pop_back();
  }
  int top()
  {
    return l.back();
  }
  int size()
  {
    return l.size();
  }
  bool empty()
  {
    if (l.size() == 0)
      return true;
    else
      return false;
  }
};

void same(myStack st, myStack st2)
{
  int flag = 1;
  if (st.size() != st2.size())
  {
    flag = 0; 
  }
  else
  {
    while (!st.empty())
    {
      if (st.top() != st2.top())
      {
        flag = 0;
        break; 
      }
      else
      {
        st.pop();
        st2.pop();
      }
    }
  }

  if(flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl; 
  }
}
int main()
{
  myStack st;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  myStack st2;
  int m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    st2.push(x);
  }

  same(st, st2);

  return 0;
}