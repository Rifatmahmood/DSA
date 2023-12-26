#include <bits/stdc++.h>
using namespace std;
class Student 
{
  public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp (Student a, Student b) {
if(a.eng_marks != b.eng_marks ) {
  return a.eng_marks > b.eng_marks; 
} else if(a.math_marks != b.math_marks) {
  return a.math_marks > b.math_marks; 
} else {
  return a.id < b.id; 
}
}; 

int main()
{
  int n;
  cin >> n;
  Student arr[n]; 

  for (int i = 0; i < n; i++)
  {
    // reading data 
    cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks; 

  }

  sort(arr, arr + n, cmp); 

  for (int i = 0; i < n; i++)
  {
    cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks <<" "<< arr[i].eng_marks << endl; 
  }
  
  

  return 0;
}