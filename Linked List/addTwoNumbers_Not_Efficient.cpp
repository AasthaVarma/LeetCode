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
    void sum(ListNode *l1, ListNode *l2, ListNode *&res, int &carry){
        if(!l1 && !l2)
            return;
        if(!l2){
            res->next = new ListNode((l1->val+carry)%10);
            cout << l1->val + carry << endl;
            carry = (l1->val+carry)/10;
            res = res->next;
            sum(l1->next, l2, res, carry);
            
        }
        else if(!l1){
            res->next = new ListNode((l2->val+carry)%10);
            cout << l2->val + carry << endl;
            carry = (l2->val+carry)/10;
            res = res->next;
            sum(l1, l2->next, res, carry);
            
         }  
        else{
            res->next = new ListNode((l1->val + l2->val + carry)%10);
            cout << l1->val + l2->val + carry << endl;
            carry = (l1->val + l2->val + carry)/10;
            res = res->next;
            sum(l1->next, l2->next, res, carry);    
        }  
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode *res= new ListNode(-1);
        ListNode *ptr=res;
        int carry = 0;
        sum(l1, l2, ptr, carry);
        if(carry == 1)
            ptr->next = new ListNode(carry);
        res = res->next;
        return res;
    }
};
