#include<iostream>
using namespace std;

int main(){
    string str = "amit kumar sahu";  // string are dynamic means it can be changed at runtime
    cout<<str<<endl;
    str =  "hello amit";
    cout<<str<<endl;
    string str1 = "new word";
    string str2 = str + str1;
    cout<<str2;
}