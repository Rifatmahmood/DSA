#include <bits/stdc++.h>
using namespace std;

int main()
{

 // there is a problem in input integer first then string;
 // getchar(); or cin.ignore(); 
 int x;
 cin >> x;
 cin.ignore(); 
 string name;
 getline(cin, name);
 cout << name;
 return 0;
}