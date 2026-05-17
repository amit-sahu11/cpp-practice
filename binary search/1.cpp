#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    cout<<n;
    int st = 0;
    int end = n-1;
    int target = 8;
    while(st<=end){
        int mid = (st+end)/2;
        if(target < arr[mid]){
            end = mid-1;
        }
        else if(target > arr[mid]){
            st = mid +1;
        }
        else{
            cout<<mid;
            break;
        }
    }
}