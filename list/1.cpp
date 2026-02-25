#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<" ";
    }

    cout<<endl;
    list<int> l1 = {4,5,6,7,8,9};
    for(int val:l1){
        cout<<val<<" ";
    }
}