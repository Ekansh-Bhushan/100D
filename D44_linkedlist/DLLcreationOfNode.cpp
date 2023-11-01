#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
};

void printLL (Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout<< temp -> data << "  ";
        temp = temp -> next;
    }cout<< endl;
}

int getlenght(Node* &head){
    Node* temp = head;
    int lenght = 0;
    while (temp != NULL)
    {
        lenght++;
        temp = temp -> next ;
    }
    cout<< "Lenght : "<< lenght;
    return lenght;
}

int main()
{
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    
    Node* head = node1;
    node1 -> data = 10;
    node1 -> next = node2;
    node1 -> prev = NULL;
    
    node2 -> data = 20;
    node2 -> next = node3;
    node2 -> prev = node1;

    node3 -> data = 30;
    node3 -> next = node4;
    node3 -> prev = node2;

    node4 -> data = 40;
    node4 -> prev = node3;
    
    cout<< "Before insertion : ";

    printLL(head);

    // insertionAtTail(head, 50);
    getlenght(head);
    cout<< endl;

    cout<< "After Insertion : ";
    
    printLL(head);
    

    return 0;
}