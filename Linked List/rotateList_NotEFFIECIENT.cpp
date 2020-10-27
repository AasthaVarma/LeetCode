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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||!head||!head->next)
            return head;
        ListNode* ptr = head;
        int i = k, len=0;
        while(ptr && i>0){
            ptr = ptr->next;
            i--;
            len++;
        }
        if(!ptr && k>=len){
            k = k%len;
            i=k;
            ptr = head;
            while(ptr && i>0){
                ptr = ptr->next;
                i--;
            }
        } 
        if(k==0)
            return head;
        ListNode *temp = head;
        while(ptr->next){
            temp = temp->next;
            ptr = ptr->next;
        }
        ptr->next = head;
        ListNode *newHead = temp->next;
        temp->next = NULL;
        head = newHead;
        return newHead;
        
    }
};
