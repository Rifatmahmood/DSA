 /*
 Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st;
  int n;
  cin >> n; 
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x); 
  }

  stack<int> stCopy; 
 while(!st.empty()) {
   stCopy.push(st.top());
   st.pop();
 }; 
 
 while(!stCopy.empty()) {
   cout << stCopy.top() << " ";
   stCopy.pop();
 }; 

  return 0;
}