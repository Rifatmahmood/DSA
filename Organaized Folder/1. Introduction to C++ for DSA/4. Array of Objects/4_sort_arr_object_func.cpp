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
bool cpm(Student a, Student b){
  if(a.marks > b.marks){
    return true; 
  } else if( a.marks < b.marks ) {
    return false; 
  } else {
    // if(a.roll < b.roll) {
    //   return true;
    // } else {
    //   return false; 
    // }

    return a.roll < b.roll; 
  }
}
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

  //compare fucn
  sort(classFive, classFive + 1, cpm);

  for (int i = 0; i < n; i++)
  {
    cout << classFive[i].name << " " << classFive[i].marks << " " << classFive[i].roll; 
}

  return 0;
}