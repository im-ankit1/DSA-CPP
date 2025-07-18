#include <iostream>
#include <string>
using namespace std;

void permute(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(str[left], str[i]);              // Swap current index with the loop index
        permute(str, left + 1, right);        // Recurse for the next index
        swap(str[left], str[i]);              // Backtrack to restore original string
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "All permutations:\n";
    permute(s, 0, s.length() - 1);

    return 0;
}
