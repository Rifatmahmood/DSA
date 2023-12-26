#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void insert_at_tail(Node *&head, Node *&tail, int v)
{
  Node *newNode = new Node(v);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode; 
    return;
  }
  tail->next = newNode;
  tail = newNode; 
}


void print_linked_list(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
}
void sort_linked_list(Node* head){
  for (Node *i = head; i->next != NULL; i = i->next)
   {
    for (Node * j = i->next; j != NULL; j = j->next)
    {
      if(i->val > j->val){
        swap(i->val, j->val); 
      }
    }
    
  }
}
int main()
{
  int val;
  Node *head = NULL;
  Node *tail = NULL; 
  int size;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, tail, val); 
  }
  sort_linked_list(head); 
  print_linked_list(head);
  return 0;
}