#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> foursum(vector<int>& arr){
    vector<vector<int>> ans;
    int n = arr.size();
    for(int i =0; i<n-3; i++){
        if(i>0 && arr[i] == arr[i-1])continue;
        
        for(int j =i+1; j<n-2; j++){
            if(j>i+1 && arr[j] == arr[j-1])continue;

            int left = j+1 , right = n-1;

            while(left<right){
                long long sum = (long long) arr[i] + arr[j] + arr[left] + arr[right];
                if(sum == 0){
                    ans.push_back({arr[i], arr[j], arr[left], arr[right]});
                    while(left<right && arr[left] == arr[left+1])left++;
                    while(left<right && arr[right] == arr[right-1])right--;
                }
                 else if(sum<0){
                    left++;
                 }

                 else{//sum>0
                    right--;
                 }
            }
        }
    }
}


int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
     
    vector<vector<int>> ans = foursum(nums);

    for (auto &quad : ans) {
        for (int x : quad) cout << x << " ";
        cout << endl;
    }
    return 0;
}