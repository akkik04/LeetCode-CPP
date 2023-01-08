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

// Runtime: 257 ms beats  94.57%
// Memory:  122 MB  beats 43.30%
class Solution {
public:
    int pairSum(ListNode* head) {
        
        // var's to calc the size of the LL.
        int size = 0;
        ListNode *temp = head;

        // var's for the max-sum operation.
        int sum = 0;
        int max = 0;

        // stack to compare "twin (as described in problem)" values (utilizing LIFO principle).
        stack<int> st;

        // size of LL.
        while(temp != NULL){

            // push each node's value to stack.
            st.push(temp->val);
            size++;
            temp = temp->next;
        }

        // iterating till half of LL.
        size /= 2;
        while(size--){
            
            // check for max sum.
            sum = head->val + st.top();
            if(sum > max){
                max = sum;
            }

            // move on to next comparison. 
            st.pop();
            head = head->next;
        }

        // return max.
        return max;
    }
};