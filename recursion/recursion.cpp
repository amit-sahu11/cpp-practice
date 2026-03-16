#include<iostream>
using namespace std;

void table(int n,int i){
    if(i>10){
        return;
    }
    cout<<n*i<<endl;
    table(n,i+1);
}

int main(){
    table(2,1);
    return 0;
}