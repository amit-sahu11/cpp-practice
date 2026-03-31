#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    Teacher(string n, string d, string s, double sal){
        // cout<<"Hii, this is constructor call"<<endl;
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    //Properties
    string name;
    string dept;
    string subject;


    //Methods / Member function
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};


int main(){
    Teacher t1("amit","computer science","c++",25000); //constructor call 
    t1.getInfo();
    return 0;
}