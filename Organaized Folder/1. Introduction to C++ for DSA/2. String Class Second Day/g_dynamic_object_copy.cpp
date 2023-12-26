#include <bits/stdc++.h>
using namespace std;
class Person{
  public:
    string name;
    int age;
    int marks1;
    int marks2; 
    Person(string nm, int ag, int mk1, int mk2)
    {
      name = nm;
      age = ag;
      marks1 = mk1;
      marks2 = mk2; 
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

int main()
{
  Person *rifat = new Person("rifat", 30, 49, 56);
  Person *raihan = new Person("raihan", 29, 89, 87);
  raihan = rifat;
  // how to copy dynamic object
  *raihan = *rifat; 
  delete rifat;
  cout << raihan->name <<" " << raihan->age << endl;

  return 0; 
}