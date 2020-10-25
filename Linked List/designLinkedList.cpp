class MyLinkedList {
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int _val = 0, ListNode* _next = nullptr) {
            val = _val;
            next = _next;
        }
    };
    ListNode* _head, *_tail;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        _head = nullptr;
        _tail = nullptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        ListNode* cur = _head;
        for (int i = 0; i < index; i++) {
            if (cur) cur = cur->next;
            else break;
        }
        if (cur) return cur->val;
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        _head = new ListNode(val, _head);
        if (!_tail) _tail = _head;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        if (_tail) _tail->next = node;
        if (!_head) _head = node;
        _tail = node;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        ListNode* cur = _head, *pre = nullptr;
        for (int i = 0; i < index; i++) {
            if (!cur) return;
            pre = cur;
            cur = cur->next;
        }
        ListNode* node = new ListNode(val, cur);
        if (!pre) _head = node;
        if (!cur) _tail = node;
        if (pre) pre->next = node;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        ListNode* cur = _head, *pre = nullptr;
        for (int i = 0; i < index; i++) {
            if (!cur) break;
            pre = cur;
            cur = cur->next;
        }
        if (!cur) return;
        if (pre) pre->next = cur->next;
        else _head = cur->next;
        if (!cur->next) _tail = pre;
        delete cur;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
