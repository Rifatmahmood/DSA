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

// get difference

// min
int get_min(Node *head)
{
  Node *tmp = head;
  int min = tmp->val;
  while (tmp != NULL)
  {
    if (tmp->val < min)
    {
      min = tmp->val;
    }
    tmp = tmp->next;
  }
  return min;
}
// max
int get_max(Node *head)
{
  Node *tmp = head;
  int max = tmp->val;
  while (tmp != NULL)
  {
    if (tmp->val > max)
    {
      max = tmp->val;
    }
    tmp = tmp->next;
  }
  return max;
}

void get_difference(Node *head)
{
  int max = get_max(head);
  int min = get_min(head);

  int result = max - min;
  cout << result << endl; 
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

  get_difference(head); 

  return 0;
}