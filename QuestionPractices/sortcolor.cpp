#include<iostream>
#include<vector>
using namespace std;

void sortcolor(vector<int>& arr){
    int first = 0 , mid = 0, last = arr.size()-1;
    while(mid<=last){
        if(arr[mid]==0){
            swap(arr[first] , arr[mid]);
            first++;
            mid++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else{//mid == 2
            swap(arr[mid] , arr[last]);
            last--;
        }
    }
} 

int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sortcolor(nums);

    for(int n : nums) {
        cout << n << " ";
    }
    return 0;
}