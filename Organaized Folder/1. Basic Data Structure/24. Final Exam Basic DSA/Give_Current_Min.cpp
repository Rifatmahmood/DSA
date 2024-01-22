#include <bits/stdc++.h>
using namespace std;
void print_min(priority_queue<int, vector<int>, greater<int> >pq)
{ if (pq.empty())
  {
    cout << "Empty" << endl;
  }
  else {
  cout << pq.top() << endl;
  }
 
};

void push_print(priority_queue<int, vector<int>, greater<int> > & pq , int x)
{
  pq.push(x);
  cout << pq.top() << endl; 
}

void delete_min(priority_queue<int, vector<int>, greater<int> > & pq)
{

 if (pq.empty()) {
        cout << "Empty" << endl;
    } else {
        pq.pop();
        if (!pq.empty()) {
            cout << pq.top() << endl;
        } else {
            cout << "Empty" << endl;
        }
    }
}

int main()
{
  int n;
  cin >> n;


  priority_queue<int, vector<int>, greater<int> > pq; 
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    pq.push(x);
  }

  int q;
  cin >> q;
  while (q--)
  {
    int command;
    cin >> command;

    if (command == 0)
    {
      int x;
      cin >> x;
      push_print(pq, x);
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