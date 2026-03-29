#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    Teacher(){
        cout<<"Hii, this is constructor call"<<endl;
    }
    //Properties
    string name;
    string dept;
    string subject;


    //Methods / Member function
    void changeDept(string newDept){
        dept = newDept;
    }


    // setter 
    void setSalaray(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }
};


int main(){
    Teacher t1; //constructor call
    Teacher t2; 
    t1.name = "amit";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.setSalaray(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}