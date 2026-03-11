#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 101;
    vector<int> bin;
    while(a>0){
        int remainder = a%2;
        bin.push_back(remainder);
    }

}