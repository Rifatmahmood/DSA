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

// inserting
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
// void find
int find(Node *head, int searchVal)
{
  Node *tmp = head;
  int index = 0;
  while (tmp != NULL)
  {
    if (searchVal == tmp->val)
    {
      return index;
    }
    tmp = tmp->next;
    index++;
  }

  return -1;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
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

    int searchVal;
    cin >> searchVal;
    int found = 0;
    found = find(head, searchVal);
    cout << found << endl;
  }
  return 0;
}