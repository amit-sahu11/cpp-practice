#include <iostream>
#include <set>
using namespace std;

int main() {
    // Initialize set with values
    set<int> s = {2, 3};

    // Inserting an element
    s.insert(1);

    // Traversing the set
    for (auto x : s)
        cout << x << endl;

    return 0;
}