#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3};

    // Traversing using iterators
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << endl;  

    return 0;
}