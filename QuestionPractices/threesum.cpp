#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threesum(vector<int>& arr){
    vector<vector<int>> result;
    sort(arr.begin() , arr.end());
    int n = arr.size();

    for(int i =0; i<n-2; i++){
       
        if(i>0 && arr[i] == arr[i-1]) continue;
        int left = i+1 , right=n-1;

        while(left<right){
            int sum = arr[i] + arr[left] + arr[right];
            if(sum == 0){
                result.push_back({arr[i] , arr[left] , arr[right]});

                while(left<right && arr[left] == arr[left+1]) left++;
                while(left<right && arr[right] == arr[right -1])right--;

            }

            else if(sum<0){
                left++;
            }

            else{
                right--;
            }
        }
    }
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threesum(nums);

    cout << "Triplets are:" << endl;
    for (auto triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
