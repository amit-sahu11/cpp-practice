#include<iostream>
using namespace std;

int sum(int n){
    int value = 0;
    for(int i=0;i<=n;i++){
        value += i;
    }
    return value;
}

int main(){
    cout<<sum(2);
}