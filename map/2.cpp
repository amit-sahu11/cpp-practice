#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[5]={5,2,11,7,15};
    int target = 9;
    unordered_map<int,int> m;
    for(int i=0;i<5;i++){
        int f = arr[i];
        int s = target-f;
        if(m.find(s)!=m.end()){
            cout<<arr[i]<<s;
        }
        else{
            m.emplace(f,m[s]);
        }
    }
}