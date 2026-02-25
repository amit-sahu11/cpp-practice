// IN THIS WE WILL LEARN ABOUT ITERATOR IN C++ VECTOR

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator it;
    for(it = vec.begin();it != vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // vector<int>::reverse_iterator n;

    // we dont have to use that line because of auto keyword....
    for(auto n = vec.rbegin();n != vec.rend();n++){
        cout<<*(n)<<" ";
    }
}