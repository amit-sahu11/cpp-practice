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

class Queue{
    Node* head;
    Node* tail;

    public:
    Queue(){
        head = tail = NULL;
    }
    void push(int data){
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode;

        }else{
            tail->next= newNode;
            tail = newNode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"list is empty";
            return -1;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    int front(){
        if(empty()){
            cout<<"list is empty";
            return;
        }
        return head->data;
    }
    bool empty(){
        return head == NULL;
    }
};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.front();
    q.pop();
    q.empty();
}