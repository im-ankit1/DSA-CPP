#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int compress(vector<char>& s) {
    int n = s.size();
    int idx = 0;

    for (int i = 0; i < n; ) {
        char ch = s[i];
        int count = 0;

        while (i < n && s[i] == ch) {
            count++;
            i++;
        }

        s[idx++] = ch;

        if (count > 1) {
            string str = to_string(count);
            for (char digit : str) {
                s[idx++] = digit;
            }
        }
    }

    s.resize(idx);
    return idx;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);

    // Output compressed result
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
