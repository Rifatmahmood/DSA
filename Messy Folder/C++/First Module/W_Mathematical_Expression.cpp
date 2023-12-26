#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a, b, c;
 char s, q;
 cin >> a >> s >> b >> q >> c; 

 // addition
 int result; 
 /*
 if(s == '+' && (a + b) == c){
  cout << "Yes" << endl; 
 } else if(s == '-' && (a - b) == c){
  cout << "Yes" << endl; 
 } else if(s == '*' && (a * b) == c){
  cout << "Yes" << endl; 
 } else {
  cout << a ; 
 }
 */

if(s == '+') {
 result = a + b; 
} else if (s == '-') {
 result = a - b; 
} else if (s == '*'){
 result = a * b; 
}

if (result == c) {
 cout << "Yes" << endl; 
} else {
 cout << result; 
}
 return 0;
}