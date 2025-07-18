#include <iostream>
#include<vector>
using namespace std;

// Binary Search function
int bs(vector<int> arr , int tar) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (arr[mid] == tar)
            return mid; // Found at index mid
        else if (arr[mid] < tar)
            st = mid + 1;
        else
            end = mid - 1;
    }
}

int main() {
    vector <int> arr = {0, 0, 1, 1, 1,3,5}; // Sorted binary array
    int tar = 3;

    int re = bs(arr , tar);
    cout<< re;

    return 0;
}


 