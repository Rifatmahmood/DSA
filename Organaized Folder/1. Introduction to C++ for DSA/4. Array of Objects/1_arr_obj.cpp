#include <bits/stdc++.h>
using namespace std;
class Student{
  public: 
  string name;
  int roll;
  int marks;
};
/* if you take input string it will get messy. to avoide it, take these steps
- use cin.ignore() once before white it is in loop
*/
int main()
{
  int n;
  cin >> n;
  Student classFive[n]; 
  for (int i = 0; i < n; i++)
  {
    cin.ignore();
    getline(cin, classFive[i].name); 
    cin >> classFive[i].roll >> classFive[i].marks;
  }

  for (int i = 0; i < n; i++)
  {
    cout << classFive[i].name << " " << classFive[i].roll << " " << classFive[i].marks << endl; 
  }
  

  return 0;
}