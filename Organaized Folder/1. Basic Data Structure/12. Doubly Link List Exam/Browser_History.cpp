#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<string> webAddress;

  string address;
  while (true)
  {
    cin >> address;
    if (address == "end")
    {
      break;
    }
    webAddress.push_back(address);
  }

  int q;
  cin >> q;

  auto current = webAddress.begin();

  while (q != 0)
  {
    string command, addressName;
    cin >> command;
    if (command == "visit")
    {

      cin >> addressName;
      auto it = find(webAddress.begin(), webAddress.end(), addressName);

      if (it != webAddress.end()){
        current = it;
        cout << *current << endl;
      } else {
        cout << "Not Available" << endl;
      }
    } else if (command == "next") {
      
      current++; 
      if(current != webAddress.end()) {
        cout << *current << endl; 
      } else {
        --current;
        cout << "Not Available" << endl; 
      }
    }

    else if (command == "prev")
    {
      
      if (current != webAddress.begin())
      {
        --current;
        cout << *current << endl;
      }
      else
      {
        cout << "Not "
             << "Available" << endl;
      }
    }

    q--;
  }

  return 0;
}