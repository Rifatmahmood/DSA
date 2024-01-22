#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  stringstream sentence(s);
  string word;
  int count = 0; 
  while (sentence >> word)
  {
    if(word[0] == '!' || word[0]  == '.' || word[0] == '?' || word[0] == ',' ) {
      continue;
    }
    count++;
    
  }
  cout << count << endl; 
  return 0;
}