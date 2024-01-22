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




void remove_duplicate(Node *head)
{
  Node *firstPointer = head;
  while (firstPointer)
  {
    Node *secondPointer = firstPointer->next;
    while (secondPointer)
    {
      if (firstPointer->val == secondPointer->val)
      {
        Node *duplicate = secondPointer;
        secondPointer = secondPointer->next;
        delete duplicate;
      }
      else
      {
        secondPointer = secondPointer->next;
      }
    }
    firstPointer = firstPointer->next;
  }

  
}


void print_linked_list(Node* head) {
  Node *tmp = head; 
  while (tmp != NULL)
  {
    cout << tmp->val << " "; 
    tmp = tmp->next;
  }

  cout << endl; 
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
  remove_duplicate(head);
  print_linked_list(head);
  return 0;
}


