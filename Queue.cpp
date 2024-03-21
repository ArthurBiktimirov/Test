#include <iostream>

struct Node {
  int key = 0;
  Node *next = nullptr;
};

struct Queue {
  size_t size;
  Node *HEAD = nullptr;
  Node *TAIL = nullptr;
  Node *NIL = nullptr;
};

Queue* create_empty_queue() {
  Queue *queue = new Queue;
  queue->NIL = new Node;
  queue->HEAD = queue->NIL;
  queue->TAIL = queue->NIL;
  return queue;
}

size_t size(Queue* queue) {
  return queue->size;
}

bool empty(Queue* queue) {
  return !(queue->size);
}

Node* first(Queue* queue) {
  if (queue != nullptr) {
    return nullptr;
  }
  return queue->HEAD;
}

void pop(Queue* queue) {
  if (queue == nullptr) {
    return;
  }
  if (queue->size == 0) {
    return;
  }
  Node* temp = queue->HEAD;
  queue->HEAD = queue->HEAD->next;
  --queue->size;
  delete temp;
}

void push(Queue* queue, int new_key) {
  if (queue == nullptr) {
    return;
  }
  if (queue->size != 0) {
    Node* new_element = new Node;
    new_element->key = new_key;
    new_element->next = queue->NIL;
    queue->TAIL->next = new_element;
    queue->TAIL = new_element;
    ++queue->size;
    return;
  }
  queue->HEAD = new Node;
  queue->HEAD->key = new_key;
  queue->HEAD->next = queue->NIL;
  queue->TAIL = queue->HEAD;
  ++queue->size;
}