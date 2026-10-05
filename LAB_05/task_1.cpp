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

    first->data = "Google";
    second->data = "YouTube";
    third->data = "Facebook";
    fourth->data = "Instagram";
    fifth->data = "GitHub";

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

    cout << "Browser History Forward: ";

    Node* current = first;

    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }

    cout << "\nBrowser History Reverse: ";

    current = fifth;

    while(current != NULL)
    {
        cout << current->data << " ";
        current = current->prev;
    }

    return 0;
}
