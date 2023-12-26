#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a, b;
 char s;
 cin >> a >> s >> b;
 bool result; 
 if (s == '>')
 {
  result = (a > b); 
 } else if (s == '<') {
  result = (a < b);
  
 }
 else if (s == '=')
 {
  result = (a == b);
 }

 if(result){
  cout << "Right"; 
 } else {
  cout << "Wrong"; 
 }

 return 0;
}