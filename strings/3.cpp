#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char ch[100];
    // cin>>ch;
    // cout<<ch<<endl;
    // if we enter the input "amit sahu" it will only print hello because it c++ it ignores the value written after space
    // so to overcome this problem we use getline()

    // cin.getline(str,len,delim?)
    char c[100];
    // cin.getline(c,100);
    cin.getline(c,100,'@');
    cout<<c<<endl;

}