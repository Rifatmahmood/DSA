#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q; 
  cin >> n >> q;

  int arr[n]; 

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i]; 
  }

  sort(arr, arr + n); 

  while (q--)
  {
    int found = 0; 
    int search;
    cin >> search;
    int l = 0, r = n - 1; 
    // binary search
    while (l <= r)
    {
      int mid_index = (l + r) / 2; 
      if(search == arr[mid_index]) {
        found = 1;
        break; 
      }
      else if (search > arr[mid_index]  ){
        l = mid_index + 1; 
      } else if ( search < arr[mid_index]) {
        r = mid_index - 1; 
      }
    }
    
   

      if(found) {
      cout << "found" << endl; 
    } else {
      cout << "not found" << endl; 
    }

  }



  return 0;
}