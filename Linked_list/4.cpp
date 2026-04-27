// delete a node from linked_list

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

void deleteAtHead(Node* &head){
    Node* temp = head; //node which will be deleted
    head = head->next;
    free(temp);

}

int main(){

}