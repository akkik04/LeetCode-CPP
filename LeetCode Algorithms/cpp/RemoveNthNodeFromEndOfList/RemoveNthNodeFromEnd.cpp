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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            
        // slow-fast ptr technique.
        ListNode *slow = head;
        ListNode *fast = head;
        
        // push the fast ptr to the front by 'n' units.
        while(n--){
            fast = fast->next;
        }
        
        // if fast meets a NULL, we return slow->next;
        if(fast == NULL){
            return slow->next;
        }
        else{
            
            // else, push the slow ptr to the node before desired node of deletion.
            while(fast->next != NULL){
                slow = slow->next;
                fast = fast->next;
            }
        }
        
        // deletion process.
        ListNode *temp = slow->next->next;
        delete slow->next;
        slow->next = temp;
        
        // return the head of the modified LL.
        return head;  
    }
};
