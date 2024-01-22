#include <bits/stdc++.h>
using namespace std;

int main()
{
 // list<int> mylist;
  list<int> mylist = {10, 20, 30, 40, 50};
  // newlist = mylist;
  mylist.push_back(100);
  mylist.push_front(200);
  mylist.pop_front();
  mylist.pop_back();
  mylist.insert(next(mylist.begin(), 0), 100);
  mylist.erase(next(mylist.begin(), 2)); 

  for (int val : mylist)
  {
    cout << val << endl;
  }
  
  
 return 0;
}

