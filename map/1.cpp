#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> m ;
    m["tv"] = 100;
    m["radio"] = 150;

    //insert
    m.insert({"camera",50});

    //emplace
    m.emplace("laptop",40);

    //
    for(auto val:m){
        cout<<val.first<< " "<<val.second<<endl;
    }

    //count
    cout<<m.count("laptop")<<endl;
    cout<<m["laptop"]<<endl;

    if(m.find("laptop") != m.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
}