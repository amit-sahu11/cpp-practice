#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = INT_MIN;
    int n = 3;
    int sum1 = 0;
    int sum2 = 0;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1 = sum1 + matrix[i][j];
            }
            else if(j==n-i-1){
                // cout<<n[i][j];
                sum2 = sum2 + matrix[i][j];
            }
        }
    }
    cout<<sum1+sum2;
}