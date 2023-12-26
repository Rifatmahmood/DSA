#include <bits/stdc++.h>
using namespace std;
void printTofive(){
  for (int i = 1; i < 6; i++)
  {
    cout << i << endl; 
  }
}

void printNumRecursively(int n){
if(n < 6) {
  cout << n << endl;
  printNumRecursively(n + 1); 
}
}
int main()
{
  // printTofive();

  printNumRecursively(1); 
  return 0;
}