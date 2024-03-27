#include <iostream>
#include "Stack.cpp"


void test1() {
  Node node;
  if ((node.key == 0) and (node.next == nullptr)) {
    std::cout << "Test 1: OK" << std::endl;
  }
}

void test2() {
  Stack stack;
  if ((stack.size == 0) and (stack.NIL == stack.HEAD) and (stack.HEAD == stack.TAIL) and (stack.TAIL == nullptr)) {
    std::cout << "Test 2: OK" << std::endl;
  }
}

void test3() {
  Stack *stack = create_empty_stack();
  if ((stack->NIL != nullptr) and (stack->HEAD == stack->TAIL) and (stack->TAIL == stack->NIL) and (stack->size == 0)) {
    std::cout << "Test 3: OK" << std::endl;
  }
  delete stack;
}

void test4() {
  Stack stack;
  size(stack);
  empty(stack);
  std::cout << "Test 4: OK" << std::endl;
}

void test5() {
  Stack stack = *(create_empty_stack());
  if ((size(stack) == 0) and (empty(stack))) {
    std::cout << "Test 5: OK" << std::endl;
  }
}

void test6() {
  Stack stack;
  push(stack, 1);
  std::cout << "Test 6: OK" << std::endl;
}

void test7() {
  Stack stack = *(create_empty_stack());
  push(stack, 1);
  push(stack, 2);
  push(stack, 3);
  if ((stack.HEAD->key == 1) and (stack.HEAD->next->key == 2) and (stack.HEAD->next->next->key == 3) and (size(stack) == 3) and (stack.TAIL->key == 3)) {
    std::cout << "Test 7: OK" << std::endl;
  }
}

void test8() {
  Stack stack = *(create_empty_stack());
  push(stack, 1);
  push(stack, 2);
  push(stack, 3);
  bool correct = 1;
  for (int i = 0; i < 3; ++i) {
    if ((top(stack))->key != 3 - i){
      correct = 0;
    }
    pop(stack);
  }
  if (correct and (top(stack) == stack.NIL)) {
    std::cout << "Test 8: OK" << std::endl; 
  }
}

int main() {
  test1(); test2(); test3(); test4(); test5(); test6(); test7(); test8();
  return 0;
}