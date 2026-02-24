#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={-5,1,3,4,8};
    int maxsum = INT_MIN;

    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j = i;j<n;j++){
            currsum+=arr[j];
            maxsum = max(currsum,maxsum);
        }
    }
    cout<<maxsum;
}