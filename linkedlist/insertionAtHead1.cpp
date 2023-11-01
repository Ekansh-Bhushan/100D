#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void insertAtHead(Node* &head, int data){

    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = head;
    head = newNode;
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
    //create a new node
    Node* node1 = new Node();
 
    // added data to node1
    node1 -> data = 10;
 

    //head pointed to node1
    Node* head = node1;
    printLL(head);
    
    insertAtHead(head,12);

    printLL(head);

    insertAtHead(head,15);

    printLL(head);

    return 0;
}