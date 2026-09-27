#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[8];
    cin.getline(s,8);
    for(char c:s){
        cout<<c<<"";
    }
}