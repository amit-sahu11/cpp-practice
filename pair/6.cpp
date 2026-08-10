#include <iostream>
#include <utility> 
using namespace std;

int main(){

    pair<int, string> myPair = {1, "Geeks"};

    auto [number, text] = myPair;
    cout << "Number: " << number << "\n";
    cout << "Text: " << text << "\n";
    return 0;
}