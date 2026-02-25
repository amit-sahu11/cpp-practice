// vec.begin() and vec.end()

// vec.end and vec.begin ye dono hi vector ka location dete hai to agar hame value chaiyr to usko dereference karna padega i mean to say * iska use krna padega

// vec.end jo hota hai bo last element ko store nhi karta balki uske baad ki jo value hoti hai matlab garbage value usko store krta hai to agar hame last value chaiye to vec.end()-1 karna padega

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<< *vec.begin();
    cout<< *(vec.end()-1);
}