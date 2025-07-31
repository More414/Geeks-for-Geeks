// Function to search a node in BST.
bool search(Node* root, int target) {
    // Your code here
     if(!root) return 0;  //if data is null

  if(root->data==target ) //if target is matching
  return 1;

  if(root->data > target) //if data grataer than target

  return search(root->left, target);
  else 
  return search(root->right, target);
}