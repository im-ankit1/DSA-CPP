#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;

    while (st < end) {
        // Skip non-alphanumeric characters
        if (!isalnum(s[st])) {
            st++;
            continue;
        }
        if (!isalnum(s[end])) {
            end--;
            continue;
        }

        // Compare characters in lowercase
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}

int main() {
    string s = "abcdcba";

    if (isPalindrome(s)) {
        cout << "Valid Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
