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
    int length(ListNode *head){
        int len=0;
        while(head){
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        n = len-n;
        ListNode *prev = NULL, *cur = head;
        for(int i=0; i<n; i++){
            prev = cur;
            cur = cur->next;
        } 
        if(!prev) head = cur->next;
        else prev->next = cur->next;
        
        delete cur;
        return head;
    }
};
