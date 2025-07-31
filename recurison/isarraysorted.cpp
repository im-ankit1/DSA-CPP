#include<iostream>
#include<vector>
using namespace std;

int issorted(vector<int>& arr , int n){
    //  for(int i =0; i<n; i++){
    //     if(arr[i]>arr[i+1]){
    //         return 0;
    //     }
    //  }
    //  return 1;
    if(n==0 || n==1) return 1;

    return arr[n-1]>=arr[n-2] && issorted(arr , n-1);

}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n= arr.size();
    cout<<issorted(arr , n)<<endl;
    return 0;
}