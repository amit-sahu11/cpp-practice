#include<iostream>
using namespace std;

int main(){
    int freq=0 ,ans=0;
    int n=16;
    int nums[] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
}