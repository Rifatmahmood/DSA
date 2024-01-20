#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree()
{
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);
  queue<Node *> q;
  if (root)
    q.push(root);

  while (!q.empty())
  {
    Node *p = q.front();
    q.pop();

    // 2. rest of the work
    int l, r;
    cin >> l >> r;
    Node *left;
    Node *right;

    if (l == -1)
      left = NULL;
    else
      left = new Node(l);
    if (r == -1)
      right = NULL;
    else
      right = new Node(r);

    p->left = left;
    p->right = right;

    // 3. children pushing
    if (p->left)
      q.push(p->left);
    if (p->right)
    {
      q.push(p->right);
    }
  }

  return root;
}

bool isSpecialBinaryTree(Node *node)
{

  if (node->left == NULL && node->right == NULL)
    return true;
  if (node->left == NULL || node->right == NULL)
    return false;
  bool l = isSpecialBinaryTree(node->left);
  bool r = isSpecialBinaryTree(node->right);
  if (l == false || r == false)
  {
    return false;
  }
  return true;
}

int max_hight(Node *node)
{
  if (node == NULL)
  {
    return 0;
  }

  int l = max_hight(node->left);
  int r = max_hight(node->right);
  return max(l, r) + 1;
}

bool areHeightsEqual(Node *root)
{
  if (root == NULL)
  {
    return true; 
  }


  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *currentNode = q.front();
    q.pop();

    int leftHeight = (currentNode->left != NULL) ? max_hight(currentNode->left) : 0;
    int rightHeight = (currentNode->right != NULL) ? max_hight(currentNode->right) : 0;

    if (abs(leftHeight - rightHeight) > 1)
    {
      return false; 
    }

    if (currentNode->left != NULL)
    {
      q.push(currentNode->left);
    }
    if (currentNode->right != NULL)
    {
      q.push(currentNode->right);
    }
  }

  return true; // All nodes have the same height
}

int main()
{
  Node *root = input_tree();
  bool havingTwoNodes = isSpecialBinaryTree(root);
  bool allHights = areHeightsEqual(root);
  if(havingTwoNodes && allHights) {
    cout << "YES" << endl; 
  } else {
    cout << "NO" << endl; 
  }
  return 0;
}