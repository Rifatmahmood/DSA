#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int val;
    Node *next; 
    Node(int val) {
      this->val = val;
      this->next = NULL; 
    }
};

void insert_at_tail(Node * &head, int v){
  Node *newNode = new Node(v);

  if(head == NULL) {
    head = newNode;
    return; 
  }
  Node *tmp = head; 
  while(tmp->next != NULL) {
    tmp = tmp->next; 
  }
  // tmp ekhon last node e
  tmp->next = newNode;
  cout << "Inserted at tail" << endl << endl; 
};

void print_linked_list(Node * head) {
  cout << endl; 
  cout << "Your Linked List: " << endl;
  Node* tmp = head;
  while(tmp != NULL) {
    cout << tmp->val << " ";
    tmp = tmp->next; 
  }
  cout << endl;
};

void insert_at_position(Node* head, int pos, int v){
  Node *newNode = new Node(v);
  Node *tmp = head; 
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next; 
  }
  
  newNode->next = tmp->next;
  tmp->next = newNode;

  cout

       << "Inserted at position " << pos << " value "<< v << endl
       << endl; 
};

void insert_at_head(Node* &head, int v){
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;
  cout << endl
       << "Inserted at head" << endl; 
}

int main()
{
  Node* head = NULL;
  while (true)
  {
    cout << "Option 1: Insert at Tail" << endl;
    cout << "Option 2: Print Linked List" << endl; 
    cout << "Option 3: Insert at any Position" << endl; 
    cout << "Option 4: Insert at Head" << endl; 
    cout << "Option 5: Terminate" << endl; 
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
   else if(op == 2) {
     print_linked_list(head);
     cout << endl; 

     // option 3 
   } else if(op == 3) {
     int pos, v;
     cout << "Enter position: " << endl;
     cin >> pos;
     cout << "Enter Value: " <<endl ;
     cin >> v;
     if(pos == 0) {
       insert_at_head(head, v);
       
     } else {
        insert_at_position(head, pos, v);
         print_linked_list(head);
     }
     
     cout << endl; 
   }

   else if (op == 4) {
     int v;
     cout << "Enter Value: " << endl; 
     cin >> v;
     insert_at_head(head, v); 
   }

   //option 4
    else if (op == 5) {
      break; 
    }

    ;
  }
  
  return 0; 
}