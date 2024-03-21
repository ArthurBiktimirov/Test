struct Node {
    int key = 0;
    Node* next = nullptr;
};
struct Stack {
    Node* NILL = new Node;
    Node* HEAD = NILL;
    Node* TAIL = HEAD;
    int size_ = 0;
};
Stack* create_empty_stack(){
    Stack* stack = new Stack;
    return stack;
}
void push(Stack& stack, int new_key){
    Node* new_tail_ref = new Node;
    stack.size_ = stack.size_ + 1;
    if (stack.HEAD == stack.NILL){
        stack.HEAD = new_tail_ref;
        stack.TAIL = new_tail_ref;
        stack.HEAD->next = stack.NILL;
        stack.HEAD->key = new_key;
        return;
    }
    stack.TAIL->next = new_tail_ref;
    stack.TAIL->next->next = stack.NILL;
    stack.TAIL->next->key = new_key;
    return;
}

void pop(Stack& stack){
    if (stack.HEAD == stack.NILL){
        return;
    }
    stack.size_ = stack.size_ - 1;
    Node* ref = stack.HEAD;
    while (ref->next != stack.NILL){
        ref = ref->next;
    }
    delete ref->next;
    ref->next = stack.NILL;
    return;
}

Node* top(Stack& stack){
    return stack.TAIL;
}

int size(Stack& stack){
    return stack.size_;
}

bool empty(Stack& stack){
    return !(stack.size_);
}

int main() {
  return 0;
}