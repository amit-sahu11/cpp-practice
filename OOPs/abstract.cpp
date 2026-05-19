#include<iostream>
#include<string>
using namespace std;

class Shape{// abstract class
    public:
        virtual void draw() = 0; //pure vitual function
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"this draw's the circle"<<endl;
        }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}