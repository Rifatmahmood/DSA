#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  Node *prev;
  int val;
  Node *next;
  Node(int val)
  {
    this->prev = NULL;
    this->val = val;
    this->next = NULL;
  }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->prev = tail;
  tail->next = newNode;
  tail = newNode;
}
void check(Node* head, Node* tail) {
  Node *tmp = head; 
  Node *tmp2 = tail;
  int flag = 1; 
  
  while (tmp->next != NULL)
  {
    if(tmp->val != tmp2->val) {
      flag = 0; 
      break;
    }
    tmp = tmp->next;
    tmp2 = tmp2->prev; 
  }

  if(flag) {
    cout << "YES" << endl; 
  } else {
    cout << "NO" << endl; 
  }
}

int main()
{

  Node *head = NULL;
  Node *tail = NULL;
  int val; 
  while (true)
  {
    cin >> val; 
    if(val == -1)
      break;
    insert_tail(head, tail, val); 
  }

  check(head, tail);
  return 0;
}