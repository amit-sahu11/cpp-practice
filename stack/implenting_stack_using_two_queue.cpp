#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    node* next;

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
}

class MyStack{
    public:
        MyStack(){

        }
         
        void push(int data){
            Node* newNode = new Node(data);
        }
        void pop(){

        }
        void top(){

        }
        bool empty(){

        }
};

int main(){
    stack<int> s;

}