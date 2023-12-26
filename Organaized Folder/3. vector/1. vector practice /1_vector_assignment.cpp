#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {10, 20, 30, 40}; 
  vector<int> results(10, 5);
  vector<int> copy_results(results);
  vector<int> copy_arr(arr, arr + 4); 
  for (int result : copy_arr)
  {
    cout << result << " "; 
    }
 return 0;
}