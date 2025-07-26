// User function Template for C++


class Solution {
  public:
    vector<int> largestValues(Node* root) {
        vector<int> result;
        if (!root) return result;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int minimum = INT_MIN;

            for (int i = 0; i < size; ++i) {
                Node* temp = q.front();
                q.pop();

                minimum = max(minimum, temp->data);

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }

            result.push_back(minimum);
        }

        return result;
    }
};
