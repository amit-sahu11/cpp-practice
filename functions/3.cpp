#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int s1 = (((s[0]-(0))-48)*10)+((s[1]-(0))-48);
    int s2 = (((s[3]-(0))-48)*10)+((s[4]-(0))-48);
    int s3 = (s1*60)+s2;
    string t;
    cin>>t;
    int t1 = (((t[0]-(0))-48)*10)+((t[1]-(0))-48);
    int t2 = (((t[3]-(0))-48)*10)+((t[4]-(0))-48);
    int t3 = (t1*60)+t2;

    int d = s3-t3;

    if(d < 0) {
        d += 24 * 60;
    }

    int hours = d / 60;
    int minutes = d % 60;
    if(hours < 10) cout << "0";
    cout << hours << ":";

    if(minutes < 10) cout << "0";
    cout << minutes;


}