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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        // creation to contain modified LL.
        ListNode *list = new ListNode(0);\

        // ptr object to created list.
        ListNode* ptr = list;

        // iterating until we have elements in either of the two lists.
        while(l1 != NULL || l2 != NULL){

            // edge cases, for direct appending due to one list being NULL.
            if(l1 == NULL){
                ptr->next = l2;
                break;
            }
            else if (l2 == NULL){
                ptr->next = l1;
                break;
            }

            // check for smaller values between the two compared nodes, and append that first.
            else if (l1->val < l2->val){
                ptr->next = l1;
                l1 = l1->next;
            }
            else{
                ptr->next = l2;
                l2 = l2->next;
            }

            // push pointer.
            ptr = ptr->next;
        }

        // return the modified list (excluding the initialization node '0')
        return list->next;
    }
};