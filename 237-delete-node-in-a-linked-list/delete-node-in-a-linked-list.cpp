/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) { // though the access of head is not given in the question 
        node->val = node->next->val; // assigning the value of the next node as the value of the node 
        node->next= node->next->next; // ultimately deliting the next elemnt of the node 

        
    }
};