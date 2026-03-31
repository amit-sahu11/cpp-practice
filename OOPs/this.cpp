#include<iostream>
#include<vector>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        Teacher(string name,string dept,string subject,double salary){
            cout<<"we are calling the constructor"<<endl;
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;  
        }
        string name;
        string dept;
        string subject;

        void getInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"dept : "<<dept<<endl;
            cout<<"subject : "<<subject<<endl;
            cout<<"salary : "<<salary<<endl;
        }
};

int main(){
    Teacher t1("amit","computer science","c++",25000);
    t1.getInfo();
}