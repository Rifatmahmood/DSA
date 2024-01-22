bool postOrder(BinaryTreeNode<int> *root, int x) {

if(root == NULL) {
  return false; 
}


if(root->data == x) return true; 
bool l = postOrder(root->left, x); 
bool r = postOrder(root->right, x); 
return (l || r); 




}
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    return postOrder(root, x); 

}