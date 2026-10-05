#include <iostream>
using namespace std;

class Node{
public:
    string data;
    Node* prev;
    Node* next;
};

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    first->data = "Image1";
    second->data = "Image2";
    third->data = "Image3";
    fourth->data = "Image4";
    fifth->data = "Image5";

    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = NULL;

    cout << "Images Forward: ";
    Node* current = first;

    while(current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << "\nImages Backward: ";

    current = fifth;

    while(current != NULL){
        cout << current->data << " ";
        current = current->prev;
    }

    cout << "\n\nMoving using next: ";

    current = first;
    cout << current->data << " ";
    current = current->next;
    cout << current->data << " ";
    current = current->next;
    cout << current->data << " ";

    cout << "\nMoving using prev: ";

    current = fifth;
    cout << current->data << " ";
    current = current->prev;
    cout << current->data << " ";
    current = current->prev;
    cout << current->data << " ";

    return 0;
}
