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
    bool isPalindrome(ListNode* head) {

        // stack creation (LIFO principle utilized).
        stack<int> st;

        // calculating the size of the LL.
        ListNode *temp = head;
        int size = 0;

        while(temp != NULL){
            size++;

            // append the current node's value into the stack.
            st.push(temp->val);
            temp = temp->next;
        }

        // set temp back to the original head param.
        temp = head;

        // iterate till half the linked list.
        size /= 2;

        while(size != 0){

            // check if the stack's top element (last element) is equal to first element.
            if(temp->val != st.top()){

                // if not, return false.
                return false;
            }

            // check next top element.
            st.pop();
            temp = temp->next;
            size--;
        }

        // return true.
        return true;
    }
};