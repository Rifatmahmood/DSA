#include <bits/stdc++.h>
using namespace std;

int main()
{
  string letters;
  cin >> letters;
  vector<int> freq(26, 0); 
  for (int i = 0; i < letters.size(); i++)
  {
    char x = letters[i];
    freq[x - 'a']++; 
  }

  for (int i = 0; i < freq.size(); i++) {
   if(freq[i] > 0) {
     cout << char(i + 'a') << " : " << freq[i] << endl; 
   }
}
  return 0;
}