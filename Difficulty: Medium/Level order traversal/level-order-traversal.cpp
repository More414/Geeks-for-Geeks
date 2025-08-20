/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> ans;
        if (!root) return ans;  // handle empty tree

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;  // store nodes of current level

            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();

                level.push_back(temp->data);

                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }

            ans.push_back(level);  // add this level to result
        }
        return ans;
    }
};
