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
    insert_at_tail(head, tail, val);
  }

  Node *head2 = NULL;
  Node *tail2 = NULL;

  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head2, tail2, val);
  }

  int sizeFirst = linked_list_size(head);
  int sizeSecond = linked_list_size(head2);
  int result = same(head, head2, sizeFirst, sizeSecond);

  if (result)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}