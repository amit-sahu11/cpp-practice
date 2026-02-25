#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(8);
    s.push(9);
    s.push(6);

    stack<int> s2;
    s2.swap(s);
}