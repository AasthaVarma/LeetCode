/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        Node *cur = head, *temp;
        while(cur){
            temp = new Node(cur->val);
            temp->next = cur->next;
            cur->next = temp;
            cur = temp->next;
        }
        cur = head;
        while(cur){
            cur->next->random = cur->random? cur->random->next : cur->random;
            
            cur = cur->next ? cur->next->next :cur->next;
        }
        cur=head; 
        Node *newHead=head->next; 
        temp=newHead;
        while(cur && temp){ 
            cur->next = cur->next ? cur->next->next :cur->next;
            temp->next = temp->next? temp->next->next :temp->next;
            cur = cur->next;
            temp = temp->next;
        }
        return newHead;    
    }
};
