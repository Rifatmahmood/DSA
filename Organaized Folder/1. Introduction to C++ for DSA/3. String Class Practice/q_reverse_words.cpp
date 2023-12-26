#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  
  stringstream sentence(s);
  string word; 
  string reversedSentence;
  while (sentence >> word)

  {
   reverse(word.begin(), word.end());

   reversedSentence += word + " "; 
  }
  if(!reversedSentence.empty()){
    reversedSentence.pop_back(); 
  }

  cout << reversedSentence; 
  return 0;
}