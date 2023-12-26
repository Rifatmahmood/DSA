#include <bits/stdc++.h>
using namespace std;
class Student{
 public:
  int id;
  char name[101];
  char section;
  int marks;
};
 
 



int main()
{
 int t;
 cin >> t; 
 while (t != 0)
 {
  // reading data
  Student students[3]; 
  for (int i = 0; i < 3; i++)
  {
   cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
  }

  // highest total mark


 int highestMarksIndex = 0;
        for (int i = 1; i < 3; i++) {
            if (students[i].marks > students[highestMarksIndex].marks) {
                highestMarksIndex = i;
            }
        }

cout << students[highestMarksIndex].id << " "
                  << students[highestMarksIndex].name << " "
                  << students[highestMarksIndex].section << " "
                  << students[highestMarksIndex].marks << std::endl;


  t--; 
 }

 return 0;
}