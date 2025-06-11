
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        int lenA=0;
        ListNode * tempB=headB;
        int lenB=0;
        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB =tempB->next;
        }
        tempA=headA;
        tempB =headB;
        if(lenA>lenB){
            int diff = lenA- lenB;
            // traverse upto that location 
            for(int i=1;i<=diff;i++){
                tempA=tempA->next;
            }
            while(tempA!=tempB){
                tempA =tempA->next;
                tempB = tempB->next ;


            }
            return tempA;
        }
            else{
            int diff = lenB- lenA;
            // traverse upto that location 
            for(int i=1;i<=diff;i++){
                tempB=tempB->next;
            }
            while(tempA!=tempB){
                tempA =tempA->next;
                tempB = tempB->next ;


            }
            return tempA;
        }
    }
};