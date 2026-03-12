#include<iostream>
using namespace std;

int printhello(){
    cout<<"amit bhai kaise ho";
    return 3;
}

int main(){
    cout<<"hello ";
    printhello();
    int val = printhello();
    cout<<endl;
    cout<<val;
    return 0;
}