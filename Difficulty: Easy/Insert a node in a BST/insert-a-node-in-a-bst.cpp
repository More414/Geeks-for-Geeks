// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* root, int key) {
        // If tree is empty, create a new node
        if (!root) return new Node(key);

        // Go left if key is smaller
        if (key < root->data) {
            root->left = insert(root->left, key);
        }
        // Go right if key is larger
        else if (key > root->data) {
            root->right = insert(root->right, key);
        }
        // If key already exists, do nothing (or handle duplicates)
        return root;
    }
};