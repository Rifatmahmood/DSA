#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test; 
  while (test--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i]; 
    }
    vector<int> newArr(arr, arr + n);
    sort(newArr.begin(), newArr.end());

    int flag = 1; 
    for (int i = 0; i < n; i++)
    {
      if (newArr[i] != arr[i])
      {
        flag = 0;
        break; 
      }
      else
      {
        flag = 1; 
      }
    }

    if(flag) {
      cout << "YES" << endl; 
    }
    else
    {
      cout << "NO" << endl;
    }
    }

  int n;

  return 0;
}