#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //Properties
    string name;
    string dept;
    string subject;
    double salary;

    //Methods / Member function
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
}