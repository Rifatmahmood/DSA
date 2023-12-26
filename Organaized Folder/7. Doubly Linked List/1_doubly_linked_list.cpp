#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    Node *prev; 
    int val;
    Node *next; 
    Node(int val) {
      this->prev = NULL; 
      this->val = val;
      this->next = NULL;
    }
};

void print_regular(Node * head) {
  Node *tmp = head; 
  while(tmp != NULL) {
    cout << tmp->val << " "; 
    tmp = tmp->next;
  }
  cout << endl; 
}

void print_reverse(Node *tail){
  Node *tmp = tail; 
  while(tmp !=NULL) {
    cout << tmp->val << " ";
    tmp = tmp->prev; 
  }
  cout << endl; 
}
int main()
{
  Node *head = new Node(10); 
  Node *a = new Node(20); 
  Node *tail = new Node(30);


  // connection 
  head->next = a;
  a->prev = head;
  a->next = tail;
  tail->prev = a;

  print_regular(head);
  print_reverse(tail); 
  return 0;
}