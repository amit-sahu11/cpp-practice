#include<iostream>
#include<string>
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
    Node* head;   // humne yaha declare nhi to automatic ye private hongi
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        Node newNode(val); //static
    }

};

int main(){
    List ll;
    return 0;
}