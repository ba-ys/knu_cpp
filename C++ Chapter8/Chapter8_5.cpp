#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; 
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
private:
    int head, tail, size;
public:
    MyQueue(int capacity) : BaseArray(capacity) {
        head = 0;     
        tail = 0;       
        size = 0;       
    }

    int capacity() {
        return getCapacity();
    }

    int length() {
        return size;
    }

    void enqueue(int val) {
        if (size >= capacity()) {
            cout << "ť�� ���� á���ϴ�!" << endl;
            return;
        }
        put(tail, val);
        tail = (tail + 1) % capacity();
        size++;
    }
    int dequeue() {
        if (size <= 0) {
            cout << "ť�� ����ֽ��ϴ�!" << endl;
            return -1;  
        }
        int val = get(head);
        head = (head + 1) % capacity();
        size--;
        return val;
    }
};

int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); 
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; 
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}