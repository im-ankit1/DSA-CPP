#include<iostream>
#include<vector>
using namespace std;

void printsubset(vector<int>& arr , vector<int>& ans , int i){
    if(i == arr.size()){
        for( int i = 0 ; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    ans.push_back(arr[i]);
    printsubset(arr , ans , i+1);
    ans.pop_back();
    int idx = i+1;
    while(idx<arr.size() && arr[i] == arr[idx] ) i++;
    printsubset(arr , ans , i+1);
}

int main(){
    vector<int> arr = {1,2,2,3};
    vector<int> ans;
     
    printsubset(arr , ans ,0);
    return 0;
}