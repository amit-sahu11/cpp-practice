#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    int ans = 1;
    int binform=n;
    while(binform>0){
        if(binform%2==1){
            ans = ans*x;
        }
        x=x*x;
        binform = binform/2;
    }
    cout<<ans;
}