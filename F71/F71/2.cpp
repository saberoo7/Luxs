//
//  2.cpp
//  F71
//
//  Created by Otakhon Toshpulatov on 04/04/23.
//

#include "2.hpp"
#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE-1);
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    int Front() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return arr[front];
    }

    int Back() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return arr[rear];
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.displayQueue();

    q.dequeue();

    q.displayQueue();

    cout << "Front element: " << q.Front() << endl;
    cout << "Rear element: " << q.Back() << endl;

    return 0;
}
