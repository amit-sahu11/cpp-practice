#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node(int v){
            value = v;
            next = NULL;
            
        }
};

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1->next = node2;
}