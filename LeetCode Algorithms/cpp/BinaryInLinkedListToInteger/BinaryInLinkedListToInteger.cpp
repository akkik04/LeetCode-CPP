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
    int getDecimalValue(ListNode* head) {
        
        // var to store the decimal representation.
        int decimal_val = 0;
        
        // iterating over the LL.
        while(head != NULL){
            
            // bit-operation technique to operate alongside the value at the current node.
            decimal_val = (decimal_val << 1) + head->val;
            // push head.
            head = head->next;
        }
        
        // return the decimal value.
        return decimal_val;
    }
};
