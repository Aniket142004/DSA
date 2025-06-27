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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tempA=list1;
        ListNode* tempB= list2;
        ListNode* last =tempA;
        

        for(int i=0;i<a-1;i++){
            tempA=tempA->next;
        }
        for(int i=0;i<b+1;i++){
            last=last->next;
        }
        while(tempB->next!=NULL){
            tempB=tempB->next;
        }
        tempA->next=list2;
        tempB->next =last;

        return list1;
        
       
    }
};