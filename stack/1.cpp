#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(9);
    s.push(8);
    s.push(7);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    // for(int val : s){
    //     cout<<val<<endl;
    // }
}