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
void reverse(Node *head, Node *tail)
{
  Node *i = head;
  Node *j = tail;
  while (i != j && i->next != j)
  {
    swap(i->val, j->val);
    i = i->next;
    j = j->prev; 
  }
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *tail = new Node(40);

  // connection
  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;
  b->next = tail;
  tail->prev = b; 

  reverse(head, tail);
 
  print_regular(head);
  return 0;
}