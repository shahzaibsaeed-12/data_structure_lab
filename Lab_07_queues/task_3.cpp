#include <iostream>
using namespace std;
#define MAX 5
class Queue {
private:
    int id[MAX];
    int priority[MAX];
    int rear;
public:
    Queue() {
        rear = -1;
    }
    void enqueue(int value, int p) {
        if (rear == MAX - 1) {
            cout<<"Queue is full!\n";
            return;
        }
        rear++;
        id[rear] = value;
        priority[rear] = p;
        cout<<"Patient "<<value<<" inserted\n";
    }
    void dequeue() {
        if (rear == -1) {
            cout<<"Queue is empty!\n";
            return;
        }
        int pos = 0;
        for (int i = 1; i <= rear; i++) {
            if (priority[i] < priority[pos])
                pos = i;
        }
        cout<<"Patient "<<id[pos]<<" treated\n";
        for (int i = pos; i < rear; i++) {
            id[i] = id[i+1];
            priority[i] = priority[i+1];
        }
        rear--;
    }
    void display() {
        if (rear == -1) {
            cout<<"Queue is empty!\n";
            return;
        }
        for (int i = 0; i <= rear; i++) {
            cout<<"Patient ID: "<<id[i];
            cout<<", Priority: "<<priority[i]<<endl;
        }
    }
};
int main() {
    Queue q;
    q.enqueue(101, 3);
    q.enqueue(102, 1);
    q.enqueue(103, 2);
    cout<<"Waiting patients:\n";
    q.display();
    q.dequeue();
    cout<<"After treatment:\n";
    q.display();
    return 0;
}
