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

void inser_at_position(Node *&head, Node *&tail, int pos, int val)
{
  Node *tmp = head;
  Node *newNode = new Node(val);
  if (pos == 0 && head->next != NULL)
  {
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
  }
  else if (pos > 0)
  {
    for (int i = 1; i < pos && tmp->next != NULL; i++)
    {
      tmp = tmp->next;
    }
    // if the pos is not invalid

    if (tmp != NULL)
    {
      //inserting node 
      newNode->next = tmp->next;
      newNode->prev = tmp;
    }
    // updating tmp 
    tmp->next = newNode;

    if (tmp->next != NULL)
    {
      // updating node following tmp; 
      tmp->next->prev = newNode;
    }
    // updating tail 
    if (newNode->next == NULL)
    {
      tail = newNode;
    }
  }
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

  inser_at_position(head, tail, 3, 400);
  print_regular(head);
  return 0;
}