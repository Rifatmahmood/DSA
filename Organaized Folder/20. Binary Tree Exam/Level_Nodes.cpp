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
    if (!(cin >> l) || !(cin >> r))
    {
      cerr << "Invalid input for left or right child!" << endl;
      exit(1);
    }

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

void reach_level(Node *root, int targetLevel)
{
  if (root == NULL)
  {
    return;
  }
  bool flag = false; 
  queue<pair<Node *, int> > q;
  q.push(make_pair(root, 0));
  while (!q.empty())
  {
    pair<Node *, int> pr = q.front();
    q.pop();
    Node *node = pr.first;
    int currentLevel = pr.second;

    if (currentLevel == targetLevel)
    {
      cout << node->val << " ";
      flag = true; 
    }

    if (node->left)
    {
      q.push(make_pair(node->left, currentLevel + 1));
    }

    if (node->right)
    {
      q.push(make_pair(node->right, currentLevel + 1));
    }
  }
  if(flag == false) {
    cout << "Invalid"; 
  }
}

int main()
{
  Node *root = input_tree();
  int level;
  cin >> level;
  reach_level(root, level);
  return 0;
}
