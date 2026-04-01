#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
};

class Teacher{
    public:
        string subject;
        double salary;
};

class TA : public Student,public Teacher{
};

int main(){
    TA t1;
    t1.name = "amit kumar sahu";
    t1.rollno = 1234;
    t1.subject = "computer science";
    t1.salary = 90000;
    return 0;
}