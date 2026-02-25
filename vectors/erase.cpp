// vec.erase() , vec.insert()  ,vec.clear()   , vec.empty()

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    vector<int> vec1 = {1,2,3,4,5,6,7,8,9};
    cout<<*vec.erase(vec.begin());
    cout<<*vec.erase(vec.begin()+1,vec.begin()+4);
}