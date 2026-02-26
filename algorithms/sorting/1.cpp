#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {3,4,5,7,1,2,6};
    sort(arr,arr+7);
    for(int val:arr){
        cout<<val;
    }
}
