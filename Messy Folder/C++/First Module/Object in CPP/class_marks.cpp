/*
Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.
*/

#include <bits/stdc++.h>
using namespace std;

class Student {     // The class
  public:
   char name[100];
   int roll;
   char section;
   int math_marks;
   int cls; 
   Student(char name[100], int roll, char section, int math_marks, int cls)
   { // Constructor
    strncpy(this->name, name, sizeof(name) - 1); 
    this->roll = roll;
    this->section = section;
    this->math_marks = math_marks;
    this->cls = cls; 
   }

   void displayInfo() {
    cout << "Name: " << this->name << endl; 
    cout << "Roll: " << this->roll << endl; 
    cout << "Section: " << this->section << endl; 
    cout << "Math Marks: " << this->math_marks << endl;
    cout << "Class: " << this->cls << endl;
   }
};

int highest_mark(int a, int b, int c){
 int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int main()
{
 Student rifat("Rifat", 3, 'A', 78, 10);
 rifat.displayInfo();
 cout << endl; 
 Student hasan("Hasan", 1, 'A', 89, 10);
 hasan.displayInfo();
 cout << endl; 
 Student raihan("Raihan", 2, 'A', 98, 10);
 raihan.displayInfo();
 cout << endl; 

 int max = highest_mark(rifat.math_marks, hasan.math_marks, raihan.math_marks); 

 // printing the highest number gainer's name 
 if (max == rifat.math_marks)
 {
  cout << rifat.name << endl; 
 } else if( max == hasan.math_marks) {
  cout << hasan.name << endl; 
 } else if (max == raihan.math_marks) {
   cout << raihan.name << endl; 
 }

 return 0;
}