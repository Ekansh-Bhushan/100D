#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};


void insertionAtTail(Node* &head, int data ){

    Node* ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    Node* newnode = new Node();
    newnode -> data = data;
    ptr -> next = newnode;
}

void printLL(Node* &head){
    Node* ptr = head;
    while (ptr != NULL)
    {
        int data = ptr -> data;
        cout<< data << " ";
        ptr = ptr -> next;
    }cout<< endl;
    
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
    
    
    node2 -> data = 20;
    node2 -> next = node3;

    node3 -> data = 30;
    node3 -> next = node4;

    node4 -> data = 40;
    
    cout<< "Before insertion : ";

    printLL(head);

    insertionAtTail(head, 50);

    cout<< "After Insertion : ";
    
    printLL(head);
    return 0;
}