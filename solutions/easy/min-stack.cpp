struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};
class MinStack {
public:
    /** initialize your data structure here. */
    Node* head;
    Node* m;
    MinStack() {
        head = NULL;
        m = NULL;
    }
    
    void push(int x) {
        Node* n = new Node(x);
        if(head == NULL) {
            head = n;
            m = n;
        }
        else {
            n->next = head;
            head = n;
            m = (head->val < m->val) ? head : m;
        }
    }
    
    void pop() {
        if(m == head) {
            updateMin();
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return m->val;
    }
    
    void updateMin() {
        Node* temp = head->next;
        Node* nextmin = temp;
        while(temp!=NULL){
            if(temp->val < nextmin->val){
                nextmin = temp;
            }
            temp = temp->next;
        }
        m = nextmin;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */