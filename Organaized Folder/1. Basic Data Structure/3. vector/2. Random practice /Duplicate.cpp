#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long arr[n]; 

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }


  int flag = 0; 
  const int MAX_VALUE = 100000;
  long long occurrence[MAX_VALUE] = {0};

  for (int i = 0; i < n; i++)
  {
    
    if (occurrence[arr[i]] == 1)
    {
      flag = 1;
      break;
    }

  
    occurrence[arr[i]] = 1;
  }


  if(flag)
  {

    cout << "YES"; 
  }
    else
      {cout << "NO";} 
  
  return 0;
}