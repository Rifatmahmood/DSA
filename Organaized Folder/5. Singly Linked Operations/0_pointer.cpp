#include <bits/stdc++.h>
using namespace std;
void fun (int* &p){
  p = NULL;
  cout << p << endl; 
  cout << &p << endl; 
};

int main()
{
  int val = 10;
  int *a = &val;

  fun(a); 
  cout << a << endl;
  cout << &a << endl; 
 
 
  return 0;
}