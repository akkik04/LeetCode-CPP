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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // initializing our variables for addition (sum & carry).
        int sum;
        int carry = 0;
      
        // creating the new list.
        ListNode *list = new ListNode(0);
        // pointer to that list.
        ListNode *ptr = list;
        
        // iterating until l1 or l2 has elements or if there is a carry.
        while(l1 != NULL || l2 != NULL || carry == 1){
            
            // set the sum to '0' for every new iteration (new addition process).
            sum = 0;
            
            // append l1's current value to the running sum if applicable.
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            
            // append l2's current value to the running sum if applicable.
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            
            // add the previous carry (if any) to the current running sum.
            sum += carry;
          
            // store our new carry.
            carry = sum / 10;
          
            // create a node object with the sum's right-most digit (excluding carry, as that's how addition works).
            ListNode *node = new ListNode(sum % 10);
          
            // set the pointer to point at the newly added node in the list.
            ptr->next = node;
            ptr = ptr->next;
        }
        
        // return the newly created list, excluding the '0' node created at initialization (hence we do 'return list->next')
        return list->next;
    }
};
