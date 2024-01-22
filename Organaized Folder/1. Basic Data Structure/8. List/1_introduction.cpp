#include <bits/stdc++.h>
using namespace std;

int main()
{
  // list<int> mylist;
  list<int> mylist(10, 5);

  // for (auto it = mylist.begin(); it != mylist.end(); it++){
  //   cout << *it << endl;
  // }

  for(int val: mylist) {
    cout << val << endl; 
  }
    return 0;
}