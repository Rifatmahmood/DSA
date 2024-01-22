#include <bits/stdc++.h>
using namespace std;

int main()
{
 int test;
 cin >> test; 
 while (test > 0)
 {
   int n;
   char c;
   cin >> n;
   cin >> c; 

   for (int i = 0; i < n; i++)
   {
     cout << c << " "; 
   }
   cout << endl; 
   test--;
 }

 return 0;
}