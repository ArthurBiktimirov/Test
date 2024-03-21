struct Node {
    int key = 0;
    Node* next = nullptr;
};
struct Stack {
    Node* NIL = nullptr;
    Node* HEAD = NIL;
    Node* TAIL = HEAD;
    int size = 0;
};
Stack* create_empty_stack(){
    Stack *stack = new Stack;
    stack->NIL = new Node;
    stack->HEAD = stack->NIL;
    stack->TAIL = stack->NIL;
    return stack;
}
void push(Stack& stack, int new_key){
    Node* new_tail_ref = new Node;
    stack.size = stack.size + 1;
    if (stack.HEAD == stack.NIL){
        stack.HEAD = new_tail_ref;
        stack.TAIL = new_tail_ref;
        stack.HEAD->next = stack.NIL;
        stack.HEAD->key = new_key;
        return;
    }
    stack.TAIL->next = new_tail_ref;
    stack.TAIL->next->next = stack.NIL;
    stack.TAIL->next->key = new_key;
    stack.TAIL = new_tail_ref;
    return;
}

void pop(Stack& stack){
    if (stack.HEAD == stack.NIL){
        return;
    }
    stack.size = stack.size - 1;
    Node* ref = stack.HEAD;
    while (ref->next != stack.NIL){
        ref = ref->next;
    }
    delete ref->next;
    ref->next = stack.NIL;
    return;
}

Node* top(Stack& stack){
    return stack.TAIL;
}

int size(Stack& stack){
    return stack.size;
}

bool empty(Stack& stack){
    return !(stack.size);
}

