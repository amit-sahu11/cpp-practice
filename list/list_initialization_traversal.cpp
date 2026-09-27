#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40, 50};

    for (int x : l)
        cout << x << " ";

    return 0;
}