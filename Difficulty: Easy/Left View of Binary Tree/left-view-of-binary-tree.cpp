/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        queue<Node*>q;
        
        vector<int>ans;
        if(!root)  // if root is null then return ans
        return ans;

        q.push(root);

        while(!q.empty()){ //run till queue  is 0
            int n=q.size();
            ans.push_back(q.front()->data);

            while(n--){
                Node *temp=q.front();
                q.pop();
                
                if(temp->left) // if you right here temp->right then it becomes left view
                q.push(temp->left); 
                
                if(temp->right) // if you right here temp->left then it becomes left view
                q.push(temp->right);
                 
            }
        }

        return ans;
    }
};