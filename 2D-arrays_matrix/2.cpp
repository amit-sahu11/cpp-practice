#include<iostream>
using namespace std;
int main(){
    int n[4][3] = {{1,2,3},{4,5,6},{7,8,9},{4,5,8}}; //2d array
    int rows = 4;
    int cols = 3; 
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }
}