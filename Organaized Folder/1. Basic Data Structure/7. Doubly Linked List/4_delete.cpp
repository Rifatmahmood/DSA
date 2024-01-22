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

void print_regular(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

void print_reverse(Node *tail)
{
  Node *tmp = tail;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << endl;
}
int size(Node *head)
{
  int count = 0;
  Node *tmp = head;
  while (tmp)
  {
    count++;
    tmp = tmp->next;
  }
  return count;
}
void insert_at_position(Node *head, int pos, int val)
{
  Node *tmp = head;
  Node *newNode = new Node(val);
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  newNode->prev = tmp;
  newNode->next = tmp->next;
  newNode->next->prev = newNode;
  tmp->next = newNode;
}
void insert_head(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

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
void delete_at_position(Node* head, int pos) {
  Node *tmp = head; 
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next; 
  }
  Node *deleteNode = tmp->next;
  tmp->next = deleteNode->next;
  deleteNode->next->prev = tmp;
  delete deleteNode; 
}

void delete_tail(Node*& tail) {
  Node *deleteNode = tail;
  tail = tail->prev; 
  tail->next = NULL; 
  delete deleteNode;
}

void delete_head(Node*& head) {
  Node *deleteNode = head;
  head = head->next;
  head->prev = NULL;
  delete deleteNode; 
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(30);

  // connection
  head->next = a;
  a->prev = head;
  a->next = tail;
  tail->prev = a;


  // int pos, val;
  // // insert_at_position(head, tail, 3, 400);
  // cout << "Enter Position and Value: " << endl;
  // cin >> pos >> val;
  
  // if(pos > size(head)) {
  //   cout << "Invalid Position" << endl; 
  // }
  // else if (pos == 0)
  // {
  //   insert_head(head, tail, val);
  //   print_regular(head);
  // }
  // else if (pos == size(head))
  // {
  //   insert_tail(head, tail, val);
  //   print_regular(head);
  // }
  // else
  // {
  //   insert_at_position(head, pos, val);
  //   print_regular(head);
  // }

  int pos;
  cout << "Enter the position: " << endl;
  cin >> pos; 
  // delete_at_position(head, pos);
  // delete_tail(tail);
  delete_head(head); 
  print_regular(head);
  print_reverse(tail); 
  return 0;
}
