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

int size(Node *head)
{
  Node *tmp = head;
  int size = 0;

  while (tmp)
  {
    size++;
    tmp = tmp->next;
  }
  return size;
}

Node *middleNode(Node *head)
{
 Node *tmp = head;
 for (int i = 0; i < size(head) / 2; i++)
 {
   tmp = tmp->next; 
 }

 return tmp; 
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

  cout << middleNode(head)->val << endl; 
  return 0;
}