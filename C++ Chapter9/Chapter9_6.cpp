//#include <iostream>
//using namespace std;
//
//class AbstractStack {
//public:
//    virtual bool push(int n) = 0;
//    virtual bool pop(int& n) = 0;
//    virtual int size() = 0;
//};
//
//class SimpleStack : public AbstractStack {
//    int max_size;
//    int top_index;
//    int* stack_data;
//public:
//    SimpleStack(int size);
//    ~SimpleStack();
//    bool push(int n);
//    bool pop(int& n);
//    int size() { return top_index; }
//};
//
//SimpleStack::SimpleStack(int size) {
//    stack_data = new int[size];
//    max_size = size;
//    top_index = 0;
//}
//
//SimpleStack::~SimpleStack() {
//    delete[] stack_data;
//}
//
//bool SimpleStack::push(int n) {
//    if (top_index >= max_size) {
//        cout << "스택 full" << endl;
//        return false;
//    }
//    stack_data[top_index] = n;
//    top_index++;
//    cout << "push 성공" << endl;
//    return true;
//}
//
//bool SimpleStack::pop(int& n) {
//    if (top_index == 0) {
//        cout << "스택 empty" << endl;
//        return false;
//    }
//    top_index--;
//    n = stack_data[top_index];
//    cout << "pop 성공 " << n << endl;
//    return true;
//}
//
//int main() {
//    SimpleStack s(5);
//
//    for (int i = 0; i < 10; i++) {
//        s.push(i);
//    }
//
//    int num;
//    for (int i = 0; i < 10; i++) {
//        s.pop(num);
//    }
//
//    return 0;
//}