#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,1,2,3,1};
    int n = 6;
    for(int i : arr){
        int freq = 0;
        for(int el:arr){
            if(el==i){
                freq++;
            }
        }
        if(freq > n/2){
            cout<<freq;
        }
    }
}