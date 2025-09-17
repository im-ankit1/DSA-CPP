#include<iostream>
#include<vector>
using namespace std;

int maxsubarray(vector<int> arr){
    int cursum = arr[0];
    int maxsum = arr[0];

    for(int i = 1; i<arr.size(); i++){
        cursum = max(arr[i] , cursum + arr[i]);
        maxsum = max(cursum , maxsum);
    }

    return maxsum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int res = maxsubarray(arr);
    cout<<res;
    return 0;
}