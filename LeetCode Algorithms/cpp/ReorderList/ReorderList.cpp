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
    void reorderList(ListNode* head) {
        
        // stack will store the nodes (utilizing LIFO principle).
        stack<ListNode*>st;

        // finding the size of the LL.
        ListNode *p_head = head;
        int size = 0;
        while(p_head != NULL){
            
            // appending each node starting from head into the stack.
            st.push(p_head);
            size++;
            p_head = p_head->next;
        }

        // two-pointers approach to re-order the LL.
        ListNode *p1 = head;
        ListNode *p2 = head->next;

        // perform the chosen process (size/2) times.
        int iters = size / 2;

        while(iters--){

            // retrieve top-most object in stack.
            ListNode *stack_top = st.top();

            // tie it to the first node.
            p1->next = stack_top;

            // tie the top-most object (second node in LL now) to the node stored in p2.
            stack_top->next = p2;

            // update our pointers for more re-ordering.
            p1 = p2;
            p2 = p2->next;

            // since we are done with the current top-most element, pop it, and access the one below it.
            st.pop();   
        }

        // upon re-ordering, p1 stores our last node, and we set the lastnode->next to NULL.
        p1->next = NULL;
    }
};