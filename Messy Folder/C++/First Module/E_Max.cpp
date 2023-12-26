#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
 int n;
 cin >> n;
 int arr[n]; 
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i]; 
 }
 int max = arr[0]; 
 for (int i = 1; i < n - 1; i++)
 {
  max = max(max, arr[i]); 
 }
 cout << max; 
 return 0;
}