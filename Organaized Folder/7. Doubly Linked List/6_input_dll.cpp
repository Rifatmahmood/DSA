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
  print_regular(head);
  print_reverse(tail); 
  return 0;
}