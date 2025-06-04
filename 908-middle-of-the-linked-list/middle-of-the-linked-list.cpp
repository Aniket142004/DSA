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
        // findout the length of the ll 
        int len =0;
        ListNode* temp =head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
            

        }
        // now findout the middleidx
        int mididx=len/2;
        ListNode* mid =head;
        for(int i=1;i<=mididx;i++){
            mid=mid->next;
        }
        return mid;
    }
};