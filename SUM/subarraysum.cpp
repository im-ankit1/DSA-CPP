#include <iostream>
#include <vector>

using namespace std;

int subarray(vector<int>& arr, int tar) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == tar) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int tar = 33;
    int res = subarray(arr, tar);
    cout << "Total subarrays with sum " << tar << " = " << res << endl;
    return 0;
}
