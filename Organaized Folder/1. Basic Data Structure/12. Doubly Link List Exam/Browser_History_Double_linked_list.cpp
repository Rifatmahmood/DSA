#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  Node *prev;
  string address;
  Node *next;
  Node(string address)
  {
    this->prev = NULL;
    this->address = address;
    this->next = NULL;
  }
};

void insert_tail(Node *&head, Node *&tail, string address)
{
  Node *newNode = new Node(address);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->prev = tail;
  newNode->next = NULL;
  tail->next = newNode;
  tail = newNode;
}

void print_regular(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->address << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

Node *search(Node *head, string address)
{
  Node *tmp = head;

  while (tmp != NULL)
  {
    if (tmp->address == address)
    {
      // cout << "After Updating: ";
      cout << address << endl;

      return tmp;
    }
    tmp = tmp->next;
  }
  cout << "Not "
       << "Available" << endl;
  return nullptr;
}

Node *prev_func(Node *current)
{
  if (current->prev != NULL)
  {
    current = current->prev;
    // cout << "After Updating: ";
    cout << current->address
         << endl;
  }
  else
  {
    cout << "Not "
         << "Available" << endl;
  }
  return current;
}

Node *next_func(Node *current)
{
  if (current->next != NULL)
  {
    current = current->next;
    // cout << "After Updating: ";
    cout << current->address
         << endl;
  }
  else
  {
    cout << "Not "
         << "Available" << endl;
  }
  return current;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  string address;
  while (true)
  {
    cin >> address;
    if (address == "end")
      break;
    insert_tail(head, tail, address);
  }

  int q;
  cin >> q;
  string command, addressName;
  Node *current = head;
  while (q != 0)
  {
    // cout << q << ". before updating: " << current->address << endl;

    cin >> command >> addressName;

    if (command == "visit")
    {
      current = search(head, addressName);
    }

    if (command == "prev")
    {
      current = prev_func(current);
    }

    if (command == "next")
    {
      current = next_func(current);
    }
    q--;
  }

  return 0;
}
