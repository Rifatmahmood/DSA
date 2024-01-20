#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int val;
    Node *left;
    Node *right;  
    Node(int val) {
      this->val = val;
      this->left = NULL; 
      this->right = NULL; 
    }
};


Node* input_tree(){
  int val;
  cin >> val;
  Node *root; 
  if(val==-1)
    root = NULL; 
    else
      root = new Node(val);
    queue<Node *> q; 
    if(root)
      q.push(root); 



    while(!q.empty()) {
      Node *p = q.front();
      q.pop(); 

      //2. rest of the work
      int l, r;
      cin >> l >> r;
      Node *left;
      Node *right; 

      if(l == -1) 
        left = NULL;
        else left = new Node(l);
      if(r == -1)
        right = NULL; 
      else
        right = new Node(r);

      p->left = left;
      p->right = right; 

      // 3. children pushing 
    if(p->left)
      q.push(p->left); 
    if(p->right) {
      q.push(p->right); 
    }
    }

    return root; 
}

int sum(Node* node) {
if(node == NULL) {
  return 0; 
}
  int sumVal = 0;
  sumVal += sum(node->left); 

if (node->left != NULL || node->right != NULL){
  sumVal += node->val;
};

  sumVal += sum(node->right);
  return sumVal; 
}

int main()
{
 Node *root = input_tree();
 int result = sum(root);
 cout << result; 
 return 0;
}