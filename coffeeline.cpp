
#include <iostream>
using namespace std;

class Queue {
    string queue[10];
    int front, rear;
public:
    Queue() {
        front = 0;
        rear = -1;
    }
    bool isFull() {
        return rear == 10 - 1;
    }
    bool isEmpty() {
        return front > rear;
    }
    void enqueue(string customer) {
        if (isFull()) {
            cout << "Queue Overflow! No more customers can join." << endl;
        } else {
            rear++;
            queue[rear] = customer;
            cout << customer << " has arrived and joined the line." << endl;
        }
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No customers in line." << endl;
        } else {
            cout << queue[front] << " has been served and leaves the line." << endl;
            front++;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Current Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Queue cl;
    int n;
    string name;

    cout << "Enter number of customers (max " << 10 << "): ";
    cin >> n;
    if (n > 10) {
        cout << "Error! Queue can hold only " << 10 << " customers." << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << "Enter customer name: ";
        cin >> name;
        cl.enqueue(name);
    }
    cl.display();
    cout << "\n--- Serving Customers ---" << endl;
    for (int i = 0; i < n; i++) {
        cl.dequeue();
        cl.display();
    }
    return 0;
}
