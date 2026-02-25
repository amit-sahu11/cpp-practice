#include<iostream>
using namespace std; 

int main(){
    pair<int,int> p = {1,5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
 

    pair<string,int> n = {"amit" , 10};
    cout<<n.first<<endl;
    cout<<n.second<<endl;

    pair<int,pair<char,int>> p1 = {1,{'a',5}};
    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl;
}