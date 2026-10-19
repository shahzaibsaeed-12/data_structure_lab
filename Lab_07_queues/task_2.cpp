#include <iostream>
using namespace std;
#define MAX 5
class Queue {
private:
    int arr[MAX];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int value) {
        if ((rear + 1) % MAX == front) {
            cout<<"Queue is full!\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else
            rear = (rear + 1) % MAX;
        arr[rear] = value;
        cout<<value<<" inserted\n";
    }
    void dequeue() {
        if (front == -1) {
            cout<<"Queue is empty!\n";
            return;
        }
        cout<<arr[front]<<" transmitted\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else
            front = (front + 1) % MAX;
    }
    void display() {
        if (front == -1) {
            cout<<"Queue is empty!\n";
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
    Queue q;
    q.enqueue(201);
    q.enqueue(202);
    q.enqueue(203);
    cout<<"Packets waiting: ";
    q.display();
    q.dequeue();
    q.enqueue(204);
    cout<<"After transmission and insertion: ";
    q.display();
    return 0;
}
