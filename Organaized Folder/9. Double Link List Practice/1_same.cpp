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
  int count = 0;
  Node *tmp = head;
  while (tmp)
  {
    count++;
    tmp = tmp->next;
  }
  return count;
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

int same(Node *head, Node *head2, int size, int size2)
{
  Node *tmp = head;
  Node *tmp2 = head2;

  if (size != size2)
  {

    return 0;
  }
  else
  {
    while (tmp != NULL)
    {

      int val = tmp->val;
      int val2 = tmp2->val;
      if (val != val2)
      {
        return 0;
      }

      tmp = tmp->next;
      tmp2 = tmp2->next;
    }
    return 1;
  }
}
int main()
{
  int val;
  Node *head = NULL;
  Node *tail = NULL;

  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_tail(head, tail, val);
  }

  int val2;
  Node *head2 = NULL;
  Node *tail2 = NULL;

  while (true)
  {
    cin >> val2;
    if (val2 == -1)
    {
      break;
    }
    insert_tail(head2, tail2, val);
  }

  int size1 = size(head);
  int size2 = size(head2);
  int result = same(head, head2, size1, size2);


  if (result)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}