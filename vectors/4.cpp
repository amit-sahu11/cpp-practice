#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<vec.size()<<endl;
    vec.push_back(4);
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.size()<<endl;

    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(9);
    cout<<"front value is : "<<vec.front()<<endl;
    cout<<"back value is : "<<vec.back()<<endl;
    cout<<"value at : "<<vec.at(2)<<endl;
}