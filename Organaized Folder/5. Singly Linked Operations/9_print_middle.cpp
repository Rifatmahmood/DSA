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

void insert_at_tail(Node *&head, int v)
{
  Node *newNode = new Node(v);

  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  // tmp ekhon last node e
  tmp->next = newNode;
};

int linked_list_size(Node *head)
{
  Node *tmp = head;
  int size = 1;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
    size++;
  }

  return size;
}

void print_middle(Node *head, int size)
{
  Node *tmp = head;
  if (size % 2 != 0)
  {
    for (int i = 1; i <= size / 2; i++)
    {
      tmp = tmp->next;
    }
    cout << tmp->val << endl;
  }
  else
  {
    for (int i = 1; i <= size / 2; i++)
    {
      tmp = tmp->next;
    }
    cout << tmp->val <<" " << tmp->next->val << endl;
  }
}

int main()
{
  int val;
  Node *head = NULL;
  int size;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      size = linked_list_size(head);
      break;
    }
    insert_at_tail(head, val);
  }
  print_middle(head, size);
  return 0;
}