#include <bits/stdc++.h>
using namespace std;
int* sort_it(int n){
 int *pArr = new int[n];
 for (int i = 0; i < n; i++)
 {
  cin >> pArr[i]; 
 }

 sort(pArr, pArr + n, greater<int>());
 return pArr; 
 return 0;
}
int main()
{
 int n;
 cin >> n;
 int *sorted = sort_it(n); 
 for (int i = 0; i < n; i++)
 {
  cout << sorted[i] << " "; 
 }

 return 0;
}