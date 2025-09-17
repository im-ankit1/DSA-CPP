#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int num : nums) {
        ans = ans ^ num;    
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,2,3};
    int res = singleNumber(arr);
    cout<<res;
}
