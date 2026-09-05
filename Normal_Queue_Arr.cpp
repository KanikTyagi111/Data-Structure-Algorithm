#include<iostream>
using namespace std;

class Queue {
public:
    int *arr;
    int front, rear;
    int size;

    Queue(int n) {
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void push(int value) {
        if(isFull()) {
            cout << "Queue is Overflow\n";
            return;
        }

        if(isEmpty()) {
            front = 0;
        }

        rear++;
        arr[rear] = value;

        cout << "Pushed " << value << " into the queue\n";
    }

    void pop() {
        if(isEmpty()) {
            cout << "Queue is Underflow\n";
            return;
        }

        cout << "Popped " << arr[front] << " from the queue\n";
        front++;
    }

    int start() {
        if(isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }

        return arr[front];
    }
};

int main() {
    Queue q(5);

    q.push(22);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    int x = q.start();

    if(!q.isEmpty()) {
        cout << x << endl;
    }

    return 0;
}