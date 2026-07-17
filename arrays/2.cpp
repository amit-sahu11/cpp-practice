#include<bits/stdc++.h>
using namespace std;

int main(){
    int smallest = INT_MAX;
    int n = 6;
    int arr[6]={4,5,6,7,8,9};
    for(int i = 0;i<n;i++){
        smallest = min(arr[i],smallest);
    }
    cout<<smallest;
}