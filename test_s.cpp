#include <iostream>
#include "Stack.cpp"


int test1() {
  Node node;
  if ((node.key == 0) and (node.next == nullptr)) {
    std::cout << "Test 1: OK" << std::endl;
  }
  return 0;
}

int test2() {
  Stack stack;
  if ((stack.size == 0) and (stack.NIL == stack.HEAD) and (stack.HEAD == stack.TAIL) and (stack.TAIL == nullptr)) {
    std::cout << "Test 2: OK" << std::endl;
  }
  return 0;
}

int test3() {
  Stack *stack = create_empty_stack();
  if ((stack->NIL != nullptr) and (stack->HEAD == stack->TAIL) and (stack->TAIL == stack->NIL) and (stack->size == 0)) {
    std::cout << "Test 3: OK" << std::endl;
  }
  return 0;
}

int text4() {
  Stack stack = *(create_empty_stack());
  if ((size(stack) == 0) and (empty(stack))) {
    std::cout << "Test 4: OK" << std::endl;
  }
  return 0;
}