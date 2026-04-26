// isme hum ek new node add kar rahe hai starting me or jo head hai ab bo new node ki taraf point karega

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp = temp->next;
    }

}

int main(){

    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);

    return 0;
}