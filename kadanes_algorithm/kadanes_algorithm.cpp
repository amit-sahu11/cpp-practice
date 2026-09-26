#include<bits/stdc++.h>
using namespace std;

int main(){
    int maxsum = INT_MIN;
    int currsum = 0;
    int n=5;
    int arr[5] = {4,5,-7,8,9};
    for(int i=0;i<n;i++){
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0){
            currsum = 0;
        }
    } 
    cout<<maxsum;
}