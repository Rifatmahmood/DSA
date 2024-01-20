#include <bits/stdc++.h>
using namespace std;
int print_to_n(int n) {
  if(n == 1) {
    return 1;
  }
  print_to_n(n - 1);
  cout << n << " "; 
}
int main()
{
  int n;
  cin >> n;
  print_to_n(n); 
  return 0;
}