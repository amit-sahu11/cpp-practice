#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> um;
    um.emplace("laptop",50);
    um.emplace("printer",50);
    um.emplace("fridge",50);

    for(auto val:um){
        cout<<val.first<<" "<<val.second<<endl;
    }
}