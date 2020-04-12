// Fri, 10th April, 2020
class MinStack {
public:

    stack<int> s;
    int min = INT_MAX;
    
    MinStack() {
    
    }
    
    void push(int x) {
        if (x <= min){
            s.push(min);
            min = x;
        }
        s.push(x);
    }
    
    void pop() {
        if (s.top() == min) {
            s.pop();
            min = s.top();
            s.pop();
        } else s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};
/* First solution with pointers was throwing AddressSanitizer: stack-buffer-overflow, I don't know why ¯\_(ツ)_/¯
#####################################################################
class MinStack {
public:
    
    struct Node {
        int val;
        Node *next;
        Node *prev;
    };

    Node *_top;
    Node *_min;
    
    MinStack() {
        _top = NULL;
        _min = NULL;
    }
    
    void push(int x) {
        Node new_node = {x, NULL, NULL};
        if (_top != NULL) {_top->next = &new_node; new_node.prev = _top;}
        _top = &new_node;
        if (_min == NULL || x < _min->val) _min = &new_node;
    }
    
    void pop() {
        if (_top == NULL) return;
        bool recalc = false;
        if (_top == _min) recalc = true;
        _top = _top->prev;
        if (_top != NULL) _top->next = NULL;
        if (recalc) {
            Node *temp = _top;
            _min = NULL;
            while (temp != NULL) {
                if (_min == NULL || temp->val < _min->val) _min = temp;
                temp = temp->prev;
            }
        }
    }
    
    int top() {
        return _top->val;
    }
    
    int getMin() {
        return _min->val;
    }
};
#####################################################################
*/

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
