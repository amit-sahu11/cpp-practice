#include<iostream>
#include<string>
using namespace std;

void func(){
    static int x = 0; //init statement - 1 run
    cout<<"x : "<<x<<endl;
    x++;
}

int main(){
    func();
    func();
    func();
    func();
    return 0;
}