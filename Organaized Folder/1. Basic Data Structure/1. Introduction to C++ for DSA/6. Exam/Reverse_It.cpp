#include <bits/stdc++.h>
using namespace std;
class Student 
{
  public:
    string name;
    int cls;
    char s;
    int id;
};
int main()
{
  int n;
  cin >> n;
  Student arr[n]; 

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id; 
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      swap(arr[i].s, arr[j].s); 
    }
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl; 
  }
  
  

  return 0;
}