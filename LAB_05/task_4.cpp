#include <iostream>
using namespace std;
class Node{
public:
    string data;
    Node* next;
};

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    first->data = "BABY";
    second->data = "DOLLAR";
    third->data = "JASMINE";
    fourth->data = "THE COLOR VIOLENT";
    fifth->data = "NEXT TO YOU";

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = first;

    Node* current = first;

    cout << "Playlist: ";
    for(int i=0;i<5;i++){
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n\nRound 1: ";
    current = first;
    for(int i=0;i<5;i++){
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\nRound 2: ";
    for(int i=0;i<5;i++){
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}
