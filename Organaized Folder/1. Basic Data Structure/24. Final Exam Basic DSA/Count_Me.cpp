#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  cin.ignore(); 
  while (test--)
  {
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    int mostTimes = 0;
    string mostOccursWord = "";
    string firstWord = "";

    
  while (ss >> word) {
    mp[word]++;
    if (mp[word] > mostTimes || (mp[word] == mostTimes && firstWord.empty())) {
        mostTimes = mp[word];
        mostOccursWord = word;
        firstWord = word;
    }
}


  cout << mostOccursWord << " " << mostTimes << endl; 
  }

  return 0;
}