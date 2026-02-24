#include<bits/stdc++.h>
using namespace std;

int main(){
    int maximum = INT_MIN;
    int n = 6;
    int arr[6]={4,5,6,7,8,9};
    for(int i = 0;i<n;i++){
        maximum = max(arr[i],maximum);
    }
    cout<<maximum;
}