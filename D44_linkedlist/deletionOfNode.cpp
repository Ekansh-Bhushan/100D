#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void deletion(Node* &head, int position){

    Node* temp = head;
    if(position == 1){
        head = head-> next;
    }
    else{
        int current = 1;
        while (current != position-1 )
        {
            temp = temp -> next;
            current++;
        }
        
        temp -> next = temp -> next -> next ;
    }
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

    deletion(head, 1);

    cout<< "After Insertion : ";
    
    printLL(head);
    return 0;
}