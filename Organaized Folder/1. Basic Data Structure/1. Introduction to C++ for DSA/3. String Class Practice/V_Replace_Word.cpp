#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s; 
  string:: iterator it;
  int index; 
    for (int i = 0; i < s.length(); i++)
    {
      if(s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' ) {
        s.replace(i, 5, " "); 
      }
    }

    cout << s; 
    return 0;
}