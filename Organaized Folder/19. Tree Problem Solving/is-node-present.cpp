bool postOrder(BinaryTreeNode<int> *root, int x) {
if(root == NULL) {
  return false; 
}


if(postOrder(root->left, x)) {
    return true; 
}  
if(postOrder(root->right, x)) {
    return true; 
}  

return root->data == x;




}
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    return postOrder(root, x); 

}