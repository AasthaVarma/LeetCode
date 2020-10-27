/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
Node* createNode(int val){
    Node *temp = new Node;
    temp->val = val;
    temp->prev = NULL;
    temp->next = NULL;
    temp->child = NULL;
    return temp;
}
class Solution {
public:
    Node* flatten(Node* head) {
        Node *cur = head, *temp=NULL, *lis=NULL;
        while(cur){
            if(cur->child){
                temp = cur->next;
                lis = flatten(cur->child);
                cur->child = NULL;
                cur->next = lis;
                lis->prev = cur;
                lis->child = NULL;
                while(lis->next)
                    lis = lis->next;
                if(temp){
                    temp->prev = lis;
                    lis->next = temp;
                }
                cur = temp;
            }
            else
                cur = cur->next;
        }
        return head;
    }
};
