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

void insert_at_head(Node *&head, Node *&tail, int v)
{

  Node *newNode = new Node(v);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

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
  cout << endl;
}

void delete_at_position(Node *&head, Node *&tail, int pos)
{
  // when user wants to delete first position and there are elements on the linked list, update the head; 
  if (pos == 0 && head != NULL)
  {
    Node *deleteNode = head;
    head = head->next;

    if (head == NULL)
    {
      tail = NULL;
    }

    delete deleteNode;
    return;
  }

  // 2. this is when user wants to delete elements except 0; 
  Node *tmp = head;

  for (int i = 1; i < pos && tmp != NULL; i++)
  {
    tmp = tmp->next;
  }
  // 3. if pos is out of index; 
  if (tmp == NULL || tmp->next == NULL)
  {
    return;
  }

  Node *deleteNode = tmp->next;
  tmp->next = tmp->next->next;

  // updating the tail 
  if (tmp->next == NULL)
  {
    tail = tmp;
  }

  delete deleteNode;
}





int main()
{
  int q;
  cin >> q;

  Node *head = NULL;
  Node *tail = NULL;
  while (q--)
  {
    int x, v;
    cin >> x >> v;
    if (x == 0)
    {
      insert_at_head(head, tail, v);
      print_linked_list(head);
    }
    if (x == 1)
    {
      insert_at_tail(head, tail, v);
      print_linked_list(head);
    }
    if (x == 2)
    {
      delete_at_position(head, tail, v);
        print_linked_list(head);
    }
  }

  return 0;
}