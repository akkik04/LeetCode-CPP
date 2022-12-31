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
    ListNode* deleteMiddle(ListNode* head) {

        // head var.
        ListNode *p_head = head;

        // checking for edge cases.
        if(p_head == NULL || p_head->next == NULL){
            return NULL;
        } 
        
        // declaring a slow and fast ptr.
        ListNode *p_slow = p_head;
        ListNode *p_fast = p_head->next->next;

        // leading the slow ptr to the node before deletion.
        while(p_fast != NULL && p_fast->next != NULL){
            p_slow = p_slow->next;
            p_fast = p_fast->next->next;
        }

        // deletion process.
        ListNode *p_temp = p_slow->next->next;
        delete p_slow->next;
        p_slow->next = p_temp;

        // return the head of the modified LL.
        return p_head;
    }
};
