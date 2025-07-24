/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // code here
        Node *slow=head;
        Node *fast=head;
        while (fast!=NULL && fast->next!=NULL)
        {
          slow=slow->next;//move one step next
          fast=fast->next->next;//move two step next
    
          if (fast==slow)//if both pointers meet then it means their is loop 
          {
            return 1;
          }
        }
          return 0;
          
        
    }
};