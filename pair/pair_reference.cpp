#include<iostream>
using namespace std;

int main(){
    pair<int,string> p;
    // p = make_pair(1,"hello");
    p = {1,"hello"};
    pair<int,string> &p1 = p;
    p1.first = 2;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
}