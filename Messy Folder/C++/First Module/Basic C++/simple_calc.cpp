#include <bits/stdc++.h>
using namespace std;

int main(){
 int x, y;
 cin >> x >>y;
  
 int sum = x + y;
 int multi = x * y;
 int subtract = x - y;

 cout << x << " + " << y << " = "<< sum << endl; 
 cout << x << " - " << y << " = "<< multi << endl; 
 cout << x << " - " << y << " = "<< subtract << endl; 
 return 0;
}