/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        // creating a variable to track the current node.
        ListNode *curr = head;
      
        // variable for the next node.
        ListNode *next;
        
        // return null if empty list.
        if(curr == NULL){
            return NULL;
        }
        
        // algo to remove dups.
        while(curr->next != NULL){
            
            // check for value between consecutive nodes.
            if(curr->val == curr->next->val){
              
                // if consecutive nodes are equal, store the forward node into next.
                next = curr->next->next;
                
                // deletion.
                delete curr->next;
              
                // re-tie
                curr->next = next;
            }
            else{
                // simply push forward if no deletion required.
                curr = curr->next;
            }
        }
        
        // returning the modified head.
        return head;
    }
};
