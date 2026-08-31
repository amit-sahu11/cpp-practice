// phele node pe jo naam hai or last node pe jo naam  hai phele node ke naam ko last node ke naam se match krna hai agar naam same hai to batao same input hue hai or agar same naam na ho to ye batao dictonary me konsa naam phele aayega konsa baad me aayega


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

    string firstName = head->name;
    string lastName = head->next->next->next->name;

    if(firstName == lastName){
        cout << "Same " << firstName << endl;
    } else {
        cout << "Different : " << firstName << " and " << lastName << endl;
        if(firstName < lastName){
            cout << firstName << " comes before " << lastName << endl;
        } else {
            cout << lastName << " comes before " << firstName << endl;
        }
    }

    return 0;
}