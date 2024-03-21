#include <iostream>
#include "Queue.cpp"
using namespace std;
void test_c(){
    Queue* _queue = create_empty_queue();
    if ((_queue->size == 0)){
        cout << "create_empty_queue" << endl;
    }
}
void test_pu(){
    Queue* _queue = create_empty_queue();
    push(_queue, 0);
    if (_queue->TAIL->key != 0){
        return;
    }
    push(_queue, 1);
    if (_queue->TAIL->key != 1){
        return;
    }
    push(_queue, 33);
    if (_queue->TAIL->key != 33){
        return;
    }
    cout << "push" << endl;
}
void test_e(){
    Queue* _queue = create_empty_queue();
    if (empty(_queue)){
        cout << "empty1" << endl;
    }
    push(_queue, 0);
    if (!(empty(_queue))){
        cout << "empty2" << endl;
    }
}
void test_s(){
    Queue* _queue = create_empty_queue();
    if (size(_queue) != 0){
        return;
    }
    push(_queue, 0);
    if (size(_queue) != 1){
        return;
    }
    push(_queue, 1);
    if (size(_queue) != 2){
        return;
    }
    push(_queue, 33);
    if (size(_queue) != 3){
        return;
    }
    cout << "size" << endl;
}
void test_po(){
    Queue* _queue = create_empty_queue();
    push(_queue, 0);
    push(_queue, 0);
    push(_queue, 0);
    pop(_queue);
    if (size(_queue) != 2){
        return;
    }
    pop(_queue);
    if (size(_queue) != 1){
        return;
    }
    pop(_queue);
    if (size(_queue) != 0){
        return;
    }
    pop(_queue);
    if (size(_queue) != 0){
        return;
    }
    cout << "pop" << endl;
}
int main(){
    test_c();
    test_e();
    test_po();
    test_pu();
    test_s();
    return 0;
}