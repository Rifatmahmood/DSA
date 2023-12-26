#include <bits/stdc++.h>
using namespace std;
class Person{
  public:
    string name;
    int age;
    int marks1;
    int marks2; 
    Person(string name, int age, int marks1, int marks2)
    {
      this->name = name;
      this->age = age;
      this->marks1 = marks1;
      this->marks2 = marks2; 
    }
    void describe(){
      cout << name << " " << age << endl;
      int total_marks = marks1 + marks2;
      cout << "his "
           << "total "
           << "marks "
           << "is "
           << total_marks; 
    }
}; 

int
main()
{
  Person rifat("Rifat Mahmood", 30, 89, 99);
  rifat.describe(); 
  return 0;
}