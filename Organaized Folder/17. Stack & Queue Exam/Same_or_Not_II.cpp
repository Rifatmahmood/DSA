#include <bits/stdc++.h>
using namespace std;
class myStack {
    public:
  list<int> myList; 

  void push(int val) {
    myList.push_back(val); 
  }

  void pop() {
    myList.pop_back(); 
  }

  int top() {
    return myList.back(); 
  }

   bool empty(){
      if(myList.size() == 0)
        return true; 
        else
          return false; 
    }
};

class myQueue {
    public:
  list<int> myList; 

  void push (int val) {
    myList.push_back(val);
  }
  void pop(){
    myList.pop_front(); 
  }

  int front() {
    return myList.front();
  }

  bool empty() {
    if(myList.size() == 0) {
      return true; 
    } else {
      return false; 
    }
  }
};


int main()
{
  int n, m;
  int flag = 1;
  cin >> n >> m;
  myStack st;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  myQueue q;
  for (int i = 0; i < m; i++){
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