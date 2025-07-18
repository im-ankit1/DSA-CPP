#include<iostream>
#include<vector>
using namespace std;

int SE(vector<int> arr){
    int n = arr.size();
    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Edge check to avoid out-of-bound access
        if ((mid == 0 || arr[mid] != arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] != arr[mid + 1])) {
            return arr[mid]; // Found the single element
        }

        // Paired index logic
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
            (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1; // Just in case (shouldn't reach here for valid input)
}

int main(){
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int me = SE(arr);
    cout << "Single element: " << me << endl;
    return 0;
}
