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

};

int main(){
    return 0;
}