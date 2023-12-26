#include <bits/stdc++.h>
using namespace std;
void reverseArr(vector<int> & arr) {
  for (int i = 0; i < arr.size() / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[arr.size() - 1 - i];
    arr[arr.size() - 1 - i] = temp; 
  }
}


int main()
{
  int size;
  cin >> size;
  vector<int> arr(size); 
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i]; 
  }

  reverseArr(arr); 

 for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i != size - 1) {
        cout << " ";
    }
}


  return 0;
}