#include <bits/stdc++.h>
using namespace std;
void print(stringstream & sentence){
  string word; 
  if(sentence >> word){
    print(sentence); 
    cout << word << endl;
  }
};
int main()
{
  string s;
  getline(cin, s); 
  stringstream sentence(s);
  print(sentence); 

  return 0;
}