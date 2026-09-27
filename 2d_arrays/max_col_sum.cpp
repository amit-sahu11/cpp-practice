#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = INT_MIN;
    int rows = 4;
    int cols = 3;
    int n[4][3] = {{1,2,3},{4,5,6},{7,8,9},{4,5,8}};
    for(int i=0;i<cols;i++){
        int new_sum = 0;
        for(int j=0;j<rows;j++){
            new_sum = new_sum + n[j][i];
            }         
        sum = max(sum,new_sum);
        }
    cout<<sum;
}