/*
You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
Note: You must use Doubly Linked List, otherwise you will not get marks.
*/

#include <bits/stdc++.h>
using namespace std;
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
  int count = 0;
  Node *tmp = head;
  while (tmp)
  {
    count++;
    tmp = tmp->next;
  }
  return count;
}

void print_regular(Node *head)
{
  Node *tmp = head;
  cout << "L "
       << "-> ";
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
  cout << "R "
       << "-> ";
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << endl;
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
  int q;
  cin >> q;

  while (q != 0)
  {
    int x, v;
    cin >> x >> v;
    int len = size(head);
    if (x == 0)
    {
      insert_head(head, tail, v);
      print_regular(head);
      print_reverse(tail);
    }
    else if (x == len)
    {
      insert_tail(head, tail, v);
      print_regular(head);
      print_reverse(tail);
    }
    else if (x > len)
    {
      cout << "Invalid" << endl;
    }
    else {
      insert_at_position(head, x, v); 
      print_regular(head);
      print_reverse(tail);
    }
    q--;
  }

  return 0;
}