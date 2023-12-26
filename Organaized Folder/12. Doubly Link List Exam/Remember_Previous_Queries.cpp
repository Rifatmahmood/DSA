/*
You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
After each query you need to print the linked list from both left to right and right to left.
*/

#include <bits/stdc++.h>
using namespace std;
void print(list<int> &myList)
{
  cout << "L "
       << "-> ";

  for (int val : myList)
  {
    cout << val << " ";
  }
  cout << endl;
  list<int> tmpList(myList);
  tmpList.reverse();
  cout << "R "
       << "-> ";
  for (int val : tmpList)
  {
    cout << val << " ";
  }
  cout << endl;
}

int main()
{

  list<int> myList;
  int q;
  cin >> q;
  while (q != 0)
  {
    int x, v;
    cin >> x >> v; 
    if (x == 0)
    {
      myList.push_front(v);
      print(myList);
    }
    else if (x == 1)
    {
      myList.push_back(v);
      print(myList);
    }
    else if(x == 2) {
      if (v < myList.size()) {
        auto it = next(myList.begin(), v);
        if (it != myList.end()) {
            myList.erase(it);
            print(myList);
        } else {
          print(myList); 
        }
    } else {
      print(myList);
    }
    }
    q--;
  }


  return 0;
}