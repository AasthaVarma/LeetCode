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
    ListNode *reverse(ListNode *head){
        if(!head || !head->next)
            return head;
        ListNode *r = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return r;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        ListNode *ptrNew, *ptr=head;
        if(fast)
            ptrNew = reverse(slow->next);
        else
            ptrNew = reverse(slow);
        while(ptrNew){
            if(ptrNew->val != ptr->val)
                return false;
            ptr = ptr->next;
            ptrNew = ptrNew->next;
        }
        return true;
    }
};
