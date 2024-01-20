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

void descending_order(Node* node, vector<int>& v) {
if(node == NULL) {
  return; 
}
  
  descending_order(node->left, v); 

if (node->left == NULL && node->right == NULL){
  v.push_back(node->val); 
}

  descending_order(node->right, v);
  
}

int main()
{
 Node *root = input_tree();
 vector<int> leafNodes; 
 descending_order(root, leafNodes);
 
 sort(leafNodes.begin(), leafNodes.end(), greater<int>());
 for (int el : leafNodes) {
        cout << el << " ";
    }
 return 0;
}