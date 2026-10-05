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

    first->data = "Zaib";
    second->data = "Ahad";
    third->data = "ABK";
    fourth->data = "Khan G";
    fifth->data = "Abbasi SB";

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = first;

    Node* current = first;

    cout << "Player Turns: ";
    for(int i=0;i<5;i++){
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\nAfter last player, turn returns to: ";
    cout << current->data;
    return 0;
}
