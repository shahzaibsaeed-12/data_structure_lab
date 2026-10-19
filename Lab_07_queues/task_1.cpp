
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
        if (rear == MAX - 1) {
            cout<<"Queue is full!\n";
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = value;
        cout<<value<<" inserted\n";
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout<<"Queue is empty!\n";
            return;
        }
        cout<<arr[front]<<" served\n";
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
    void display() {
        if (front == -1) {
            cout<<"Queue is empty!\n";
            return;
        }
        for (int i = front; i <= rear; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    void count() {
        if (front == -1)
            cout<<"Waiting customers: 0\n";
        else
            cout<<"Waiting customers: "<<rear-front+1<<endl;
    }
};
int main() {
    Queue q;
    q.enqueue(101);
    q.enqueue(102);
    q.enqueue(103);
    cout<<"Waiting customers: ";
    q.display();
    q.count();
    q.dequeue();
    cout<<"After serving: ";
    q.display();
    q.count();
    return 0;
}
