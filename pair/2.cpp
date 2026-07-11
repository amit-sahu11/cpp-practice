#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};
    vp.push_back({8,9});
    // push back me hamko batana padta hai ki hum pair insert karwa rahe hai lekin emplace_back se bass value pass karni padti hai
    vp.emplace_back(7,9);
    // for(pair<int,int> val:vp){
    // instid of this we can also use auto keyword
    for(auto val:vp){
        cout<<val.first<<" "<<val.second<<endl;
    }
}