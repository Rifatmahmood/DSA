/*
You will be given  queries. In each query you will get a command. The command is of two types -

You will be given  and  of a person who stood in a line of a ticket counter.
You will be given only  which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print .
Note: There can be multiple person in the line with same name.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  queue <string> line; 
  while (q != 0)
  {
    int command;
    cin >> command;
    if (command == 0)
    {
      string name;
      cin >> name;
      line.push(name); 
    } else if( command == 1) {
      if(!line.empty()) {
        string person = line.front();
        line.pop();
        cout << person << endl;
      } else {
        cout << "Invalid" << endl; 
      }
    }

    q--; 
  }
  return 0;
}