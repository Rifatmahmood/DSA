#include <bits/stdc++.h>
using namespace std;

int main()
{
 int x;
 cin >> x; 
 switch (x % 2)
 {
 case 1:
  cout << "odd"; 
  break;
 case 0:
  cout << "even";
  break; 
 default:
  cout << "It is not even a number"; 
  break;
 }
 return 0;
}