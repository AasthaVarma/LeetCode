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
    ListNode* reverse(ListNode* &head, ListNode* temp){
        if(!head)
            return temp;
        ListNode* v = head;
        head = head->next;
        v->next = temp;
        return reverse(head, v);
    }
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp = NULL;
        return reverse(head, temp);
    }
};
