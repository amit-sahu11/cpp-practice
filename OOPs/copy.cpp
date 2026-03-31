#include<iostream>
#include<vector>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
        Teacher(string name,string dept,string subject,double salary){
            cout<<"we are calling the constructor"<<endl;
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;  
        }
        // copy constructor
        Teacher(Teacher &orgObj){ //pass by reference
            cout<<"I am custom copy constructor"<<endl;
            this->name = orgObj.name;
            this->dept = orgObj.dept;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
        }

        void getInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"dept : "<<dept<<endl;
            cout<<"subject : "<<subject<<endl;
            cout<<"salary : "<<salary<<endl;
        }
};

int main(){
    Teacher t1("amit","computer science","c++",25000);
    // t1.getInfo();

    Teacher t2(t1); // custom copy constructor -> invoke
    t2.getInfo();

    return 0;
}