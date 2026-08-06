#include <iostream>
#include <set>
using namespace std;

int main() {

    // Creating an empty set
    set<int> s1;

    // Initialize set with list 
    set<int> s2 = {1, 2, 3, 2, 1}; 

    // Traversing the set
    for (auto& x : s2)
        cout << x << " ";
    cout << endl;

    return 0;
}