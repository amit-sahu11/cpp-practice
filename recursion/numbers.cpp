#include<iostream>
using namespace std;

void rev(int n){
    if(n==1){
        cout<<"1\n";
        return;
    }
    cout<<n<<" ";
    rev(n-1);
}


int main(){
    rev(25);
    return 0;
}