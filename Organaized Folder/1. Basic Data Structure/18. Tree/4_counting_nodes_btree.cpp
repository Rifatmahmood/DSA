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

int count(Node* node) {
  if(node == NULL)
    return 0;
  int l = count(node->left);
  int r = count(node->right);
  return l + r + 1; 
}

int main()
{
  Node *root = input_tree();
  int result = count(root);
  cout << result; 
  return 0;
}