#include <bits/stdc++.h>
using namespace std;

int main()
{
 string about;
 getline(cin, about);
 stringstream sentence(about);
 string word; 
 while(sentence >> word) {
  word = word + "-"; 
  cout << word << endl;
 }
 return 0;
}