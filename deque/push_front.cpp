#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    
    // Adding elements at the front
    d.push_front(30);
    d.push_front(20);
    d.push_front(10);
    
    // Displaying elements
    cout << "Elements in deque (added using push_front): ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}