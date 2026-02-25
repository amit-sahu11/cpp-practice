#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2(v1);

    for(int val:v2){
        cout<<val;
    }
}