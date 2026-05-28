// if we implement stack usig array there will be a limit to insert the data in the stack

// if we implement stack using vector there will not be any limitations on the stack
// so right now we are going to use vector for our stack data structure

#include <iostream>
#include <vector>

using namespace std;

class stack{
    vector<int> v;

public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size()==0;
    }
};

int main(){

}