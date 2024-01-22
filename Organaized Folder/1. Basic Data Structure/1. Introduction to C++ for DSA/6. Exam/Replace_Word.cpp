#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test; 
  while(test > 0){
    string s, x;
    char r = '#'; 
    cin >> s >> x;
    int found;

    for (int i = 0; i < s.length(); i++)
    {
     found = s.find(x); 
      if(found != -1) {
      s.replace(found, x.length(), 1, r);
    }
    }
    cout << s << endl; 
    

    test--;
  }
  return 0;
}