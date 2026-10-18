#include<iostream>
#include<queue>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char,int> m;
    string str = "level";
    queue<int> q;
    for(int i=0;i<str.size();i++){
        if(m.find(str[i])==m.end()){
            q.push(i);
        }
        m[]
    }
}