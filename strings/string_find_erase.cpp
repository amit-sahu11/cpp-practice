#include<iostream>
using namespace std;

int main(){
    string s = "daabcbaabcbc";
    string m = "abc";
    // cin>>s;
    cout<<s<<endl;
    // int st = 0,end=s.length()-1;
    int f = s.find(m);
    int n = m.length();
    cout<<n<<endl;
    cout<<s.erase(f,n);
}