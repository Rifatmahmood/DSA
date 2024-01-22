#include <bits/stdc++.h>
using namespace std;

int main()
{
 

  
    string s;
    getline(cin, s);
    int flag = 0;
    stringstream sentence(s);
    string word; 

    while(sentence >> word) {
      if(word == "Jessica") {
        flag = 1;
        break; 
      }
      }

    if(flag) {
      cout << "YES"; 
    } else {
      cout << "NO"; 
    }
  

  return 0;
}