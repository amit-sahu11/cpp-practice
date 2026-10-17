#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "level";
    bool palindrome = true;

    for (int i = 0, j = word.size() - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}