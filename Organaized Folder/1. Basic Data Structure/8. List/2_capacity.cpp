#include <bits/stdc++.h>
using namespace std;

int main()
{
  // list<int> mylist;
  list<int> mylist(10, 5);
  mylist.clear(); 
  for(int val: mylist) {
    cout << val << endl; 
  }
  cout << mylist.size(); 
  return 0;
}