#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;

        Student(){
            cout<<"non-parameritized constructor"<<endl;
        }

        Student(string name){
            this->name = name;
            cout<<"parameritized constructor"<<endl;
        }
};

// like abhi hum direct object bana rahe hai to non parameritized constructor call ho raha hai
// but agar hum usme koi value pass kar dete hai to parameritized constructor call hoga
// so isko khete hai constructor overloading use case ke hisab se apna form change krna

int main(){
    Student s1;
    return 0;
}