#include <bits/stdc++.h>
using namespace std;

vector<int> concatenatedArrays(vector<int>& arr, vector<int> & arr2 ) {
  vector<int> arr3;
  arr3.insert(arr3.end(), arr2.begin(), arr2.end()); 
  arr3.insert(arr3.end(), arr.begin(), arr.end());

  return arr3; 
}

int main() {
  int count;
  cin >> count;

  vector<int> arr(count); 
  for (int i = 0; i < count; i++)
  {
    cin >> arr[i]; 
  }

    vector<int> arr2(count); 
  for (int i = 0; i < count; i++)
  {
    cin >> arr2[i]; 
  }

  vector<int> arr3 = concatenatedArrays(arr, arr2); 

  for (int i = 0; i < arr3.size(); i++)
  {
    cout << arr3[i]; 
    if(i < arr3.size()-1){
      cout << " "; 
    }
  }

  return 0;
}