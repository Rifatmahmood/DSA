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

void duplicate_value(Node *head, int size)
{
  Node *tmp = head;
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (tmp->val == tmp->next->val)
      {
        cout << "YES" << endl;
        return;
      }
      tmp = tmp->next;
    }
    tmp = head;
  }
  cout << "NO" << endl;
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
  duplicate_value(head, size);
  return 0;
}