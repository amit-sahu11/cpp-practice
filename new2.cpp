// data ek character array hai, ek linked list hai jisme name store hai, we will give a student name and we will check if that name is present in the linked list or not. If it is present then we will print "Name found" otherwise we will print "Name not found".
// or agarpresent hai to uske aange wale or uske pehle wale name ko bhi print karna hai. Agar name list ke first ya last me hai to sirf uska naam print karenge.

// logic temp phele node ko point krega
// ek node temp ke peeche peeche chalega
// name input kiya hai
// x name ko search karenge
// string ko compare karo
// temp ka name x ke barabar hai to loop break karo
// or agar barabar nhi hai to t temp == null tak chalega or break ho jayega

// we have to use singly linked list.

#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        string name;
        Node* next;

        Node(string val){
            name = val;
            next = NULL;
        }
};

int main(){
    Node* head = new Node("amit");
    head->next = new Node("sharvesh");
    head->next->next = new Node("sameer");
    head->next->next->next = new Node("pranav");

    string x;
    cout << "Enter the name to search: ";
    cin >> x;

    Node* temp = head;
    Node* prev = NULL;
    bool found = false;

    while(temp != NULL){
        if(temp->name == x){
            found = true;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    if(found){
        cout << "Name found" << endl;
        if(prev != NULL){
            cout << "Previous name: " << prev->name << endl;
        }
        if(temp->next != NULL){
            cout << "Next name: " << temp->next->name << endl;
        }
    } else {
        cout << "Name not found" << endl;
    }

    return 0;
}