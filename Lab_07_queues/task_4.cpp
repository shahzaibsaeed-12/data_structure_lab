#include <iostream>
using namespace std;
#define MAX 5
class Deque {
private:
    int arr[MAX];
    int front, rear;
public:
    Deque() {
        front = -1;
        rear = -1;
    }
    void insertRear(int value) {
        if ((rear + 1) % MAX == front) {
            cout<<"Deque is full!\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else
            rear = (rear + 1) % MAX;
        arr[rear] = value;
        cout<<value<<" inserted at rear\n";
    }
    void insertFront(int value) {
        if ((rear + 1) % MAX == front) {
            cout<<"Deque is full!\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else
            front = (front - 1 + MAX) % MAX;
        arr[front] = value;
        cout<<value<<" inserted at front\n";
    }
    void deleteFront() {
        if (front == -1) {
            cout<<"Deque is empty!\n";
            return;
        }
        cout<<arr[front]<<" removed from front\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else
            front = (front + 1) % MAX;
    }
    void deleteRear() {
        if (front == -1) {
            cout<<"Deque is empty!\n";
            return;
        }
        cout<<arr[rear]<<" removed from rear\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else
            rear = (rear - 1 + MAX) % MAX;
    }
    void display() {
        if (front == -1) {
            cout<<"Deque is empty!\n";
            return;
        }
        int i = front;
        while (true) {
            cout<<arr[i]<<" ";
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
        cout<<endl;
    }
};
int main() {
    Deque q;
    q.insertRear(301);
    q.insertRear(302);
    q.insertFront(300);
    cout<<"Passenger requests: ";
    q.display();
    q.deleteFront();
    cout<<"After removing front: ";
    q.display();
    q.deleteRear();
    cout<<"After removing rear: ";
    q.display();
    return 0;
}
