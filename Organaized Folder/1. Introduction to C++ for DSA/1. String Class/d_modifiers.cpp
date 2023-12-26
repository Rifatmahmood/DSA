#include <bits/stdc++.h>
using namespace std;

int main()
{
 string a = "Hello"; 
 string b = "World";
 string space = " "; 
 a += space + b;
 a.push_back(','); 
 a.pop_back();
 a.erase(4, 1);
 a.replace(4, 3, "me"); 
 cout << a;
 return 0;
}