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
    int lengthOfList(ListNode *ptr){
        int len = 0;
        while(ptr){
            ptr = ptr->next; len++;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = lengthOfList(headA);
        int lenB = lengthOfList(headB);
        cout <<  lenA << " " << lenB << endl;
        if(lenA==0 || lenB==0)
            return NULL;
        int diff = lenA-lenB;
        if(diff > 0){
            for(int i=0; i<diff; i++)
                headA = headA->next;
        }
        else{
            diff = -1*diff;
            for(int i=0; i<diff; i++)
                headB = headB->next;
        }
        while(headA && headB){
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }    
        return NULL;
    }
};
