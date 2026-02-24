#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    int value = 0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i][1] == '+'){
            value = value+1;
        }else{
            value = value-1;
        }
    }
    cout<<value;
}