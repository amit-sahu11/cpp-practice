// make linked list using class (aasi class jo linked list ko implementation kare) add a node display 

// delete the last node , add a node before the first node , add a node after a given data 

// in linked list first pointer is pointing at head

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void addNode(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteLastNode(){
        if(head == NULL){
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void addNodeBeforeFirst(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void addNodeAfterGivenData(int data, int val){
        Node* temp = head;
        while(temp != NULL && temp->data != data){
            temp = temp->next;
        }
        if(temp == NULL){
            cout << "Data not found in the list." << endl;
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        if(temp == tail){
            tail = newNode;
        }
    }

};

int main(){
    List ll;
    ll.addNode(10);
    ll.addNode(20);
    ll.addNode(30);
    ll.display(); // Output: 10 20 30
    ll.deleteLastNode();
    ll.display(); // Output: 10 20
    ll.addNodeBeforeFirst(5);
    ll.display(); // Output: 5 10 20
    ll.addNodeAfterGivenData(10, 15);
    ll.display(); // Output: 5 10 15 20
    return 0;
}