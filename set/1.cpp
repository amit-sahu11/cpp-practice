#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(4);
    s.insert(5);
    s.emplace(6);
    s.emplace(7);
    cout<<s.size()<<endl;
    cout<<*(s.lower_bound(4))<<endl;

    // lower bound give the exact value 4 and if 4 is not available it give just one above valur means 5 and if it is also not available it will give s.end() value means koi bhi valid anser exist nhi krta and when we will print the defrence value it will give the output as 0


    for(auto val:s){
        cout<<val;
    }
}