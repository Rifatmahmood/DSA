#include <bits/stdc++.h>
using namespace std;

int main()
{
 string name = "Rifat Mahmood";
 string:: iterator it;

 for (it = name.begin(); it < name.end(); it++){
  cout << *it << endl;
 }
  
 return 0;
}