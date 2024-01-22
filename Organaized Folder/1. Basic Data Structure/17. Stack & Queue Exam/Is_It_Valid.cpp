#include <bits/stdc++.h>
using namespace std;
void is_valid(string binary) {
  string zero, one; 

  for(char digit: binary) {
    if(digit == '0') {
      zero += digit; 
    } else {
      one += digit; 
    }
  }

  if(zero.size() == one.size()) {
    cout << "YES" <<endl; 
  } else {
    cout << "NO" << endl;
  }
}
int main()
{
  
  int q;
  cin >> q; 
  while(q != 0) {
    string binary;
    cin >> binary;
    is_valid(binary);
    q--; 
  }
  return 0;
}