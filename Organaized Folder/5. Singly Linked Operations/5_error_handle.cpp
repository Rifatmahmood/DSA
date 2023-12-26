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
  cout << "Inserted at tail" << endl;
};
// print
void print_linked_list(Node *head)
{
  cout << "Your Linked List: " << endl;
  if (head == NULL)
  {
    cout << "Your linked list is empty." << endl;
  }
  else
  {
    Node *tmp = head;
    while (tmp != NULL)

    {
      cout << tmp->val << " ";
      tmp = tmp->next;
    }
  }

  cout << endl;
};

void insert_at_position(Node *head, int pos, int v)
{
  Node *newNode = new Node(v);
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
    if (tmp == NULL)
    {
      cout << "Invalid index" << endl;
      cout << endl;
      return;
    }
  }

  newNode->next = tmp->next;
  tmp->next = newNode;

  cout

      << "Inserted at position " << pos << " value " << v << endl
      << endl;
};

void insert_at_head(Node *&head, int v)
{
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;
  cout << endl
       << "Inserted at head" << endl;
}

void delete_at_position(Node *head, int pos)
{
  Node *tmp = head;

  for (int i = 1; i < pos - 1; i++)
  {
    tmp = tmp->next;
    if (tmp == NULL)
    {
      cout << pos << " is an invalid index" << endl;
      cout << endl;
      return;
    }
  }

  if (tmp == NULL)
  {
    cout << "Invalid index" << endl;
    cout << endl;
    return;
  }
  Node *delteNode = tmp->next;
  tmp->next = tmp->next->next;
  delete delteNode;
  cout << "Deleted position " << pos << endl;
}

void delete_head(Node *head)
{
  if (head == NULL)
  {
    cout << "Head is not available" << endl;
    cout << endl;
    return;
  }
  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;
  cout << "Deleted position " << endl;
  print_linked_list(head);
}

int main()
{
  Node *head = NULL;
  while (true)
  {
    cout << "Option 1: Insert at Tail" << endl;         // done
    cout << "Option 2: Print Linked List" << endl;      // done
    cout << "Option 3: Insert at any Position" << endl; // done
    cout << "Option 4: Insert at Head" << endl;         // done
    cout << "Option 5: Delete at any Postion" << endl;  // done
    cout << "Option 6: Delete Head" << endl;            // done
    cout << "Option 7: Terminate" << endl;              // done
    int op;
    cin >> op;

    // option 1
    if (op == 1)
    {
      cout << "Pleas, enter value: " << endl;
      int v;
      cin >> v;
      insert_at_tail(head, v);
      print_linked_list(head);
      cout << endl
           << endl;
    }
    // otion 2
    else if (op == 2)
    {
      print_linked_list(head);
      cout << endl;

      // option 3
    }
    else if (op == 3)
    {
      int pos, v;
      cout << "Enter position: " << endl;
      cin >> pos;
      cout << "Enter Value: " << endl;
      cin >> v;
      if (pos == 0)
      {
        insert_at_head(head, v);
      }
      else
      {
        insert_at_position(head, pos, v);
        print_linked_list(head);
      }

      cout << endl;
    }

    else if (op == 4)
    {
      int v;
      cout << "Enter Value: " << endl;
      cin >> v;
      insert_at_head(head, v);
    }
    else if (op == 5)
    {
      int pos;
      cout << "Enter the Position: " << endl;
      cin >> pos;
      if (pos == 0)
      {
        delete_head(head);
      }
      else
      {
        delete_at_position(head, pos);
        print_linked_list(head);
      }
    }
    else if (op == 6)
    {
      delete_head(head);
    }

    else if (op == 7)
    {
      break;
    }
  }

  return 0;
}