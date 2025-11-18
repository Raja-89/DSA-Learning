#include <iostream>
using namespace std;

class Queue {
    int *arr; // what is this? Is this dynamic? array to hold queue elements 
    int front, rear, size;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];// dynamic array allocation
        front = -1;
        rear = -1; //why -1? because queue is initially empty
    }

    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (front == -1) {
            front = 0;  
        }

        rear++;
        arr[rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << arr[front] << " deleted from queue." << endl;
        front++;

        if (front > rear) {
            front = rear = -1;  // Reset queue
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter queue size: ";
    cin >> size;

    Queue q(size);

    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
