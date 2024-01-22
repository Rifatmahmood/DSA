#include <bits/stdc++.h>
using namespace std;
class Student {
  public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks ) {
      this->name = name;
      this->roll = roll;
      this->marks = marks; 
    }
};


class cmp {
  public: 
        bool operator()(Student a, Student b) {
          if(a.marks < b.marks) 
            return true;
            else if (a.marks > b.marks) {
              return false; 
            } else {
              if(a.roll > b.roll) {
                return true; 
              } else
                return false; 
            }
        }
};


void print_min(priority_queue<Student, vector<Student>, cmp >&pq)
{ if (pq.empty())
  {
    cout << "Empty" << endl;
  }
  else {
    const Student &topStudent = pq.top(); 
    cout << topStudent.name << " "
         << topStudent.roll << " "
         << topStudent.marks << " "
         << endl;
  }
 
};


void push_print(priority_queue<Student, vector<Student>, cmp> & pq , string name, int roll, int marks)
{
  Student obj(name, roll, marks); 
  pq.push(obj);
  print_min(pq); 
};

void delete_min(priority_queue<Student, vector<Student>, cmp > & pq)
{

 if (pq.empty()) {
        cout << "Empty" << endl;
    } else {
        pq.pop();
        if (!pq.empty()) {
          print_min(pq); 
        }
        else
        {
          cout << "Empty" << endl;
        }
    }
}


int main()
{
  int n;
  cin >> n; 
  priority_queue<Student, vector<Student>, cmp> pq;

  for (int i = 0; i < n; i++)
  {
    string name;
    int roll, marks;
    cin >> name >> roll >> marks; 
    Student obj(name, roll, marks);
    pq.push(obj); 
  }

  int q;
  cin >> q;
  while (q--)
  {
    int command;
    cin >> command;

    if (command == 0)
    {
      string name;
      int roll, marks;
      cin >> name >> roll >> marks; 
      push_print(pq, name, roll, marks);
    }
    else if (command == 1)
    {
      print_min(pq);
    }
    else if (command == 2)
    { 
      delete_min(pq);
    }
  }




  return 0;
}