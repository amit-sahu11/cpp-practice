#include <iostream>
using namespace std;

int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}