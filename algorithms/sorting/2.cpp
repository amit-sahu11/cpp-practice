#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1,2,4,3,4,6};
    sort(vec.begin(),vec.end());
    for(int val : vec){
        cout<<val;
    }
}