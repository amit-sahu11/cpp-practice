#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    
    // Adding elements at the back
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    
    // Displaying elements
    cout << "Elements in deque (added using push_back): ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}