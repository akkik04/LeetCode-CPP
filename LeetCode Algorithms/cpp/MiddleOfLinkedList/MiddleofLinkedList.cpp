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
    ListNode* middleNode(ListNode* head) {
        
        // vars.
        ListNode *p_head = head;
        ListNode *temp = head;
        int length = 0;
        int tracker = 0;
        
        // getting the length of the LL.
        while(p_head != NULL){
            length++;
            p_head = p_head->next;
        }
        
        // pushing the temp pointer to the desired location.
        while(tracker < (length / 2)){
            temp = temp->next;
            tracker++;
        }
        
        // return the temp pointer.
        return temp;
    }
};
