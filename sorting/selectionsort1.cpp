#include<iostream>
#include<vector>
using namespace std;

void st(vector<int> &arr , int n){
    for(int i=0; i<n-1; i++){

        int small= i;
        for(int j=i+1 ; j<n; j++){

            if(arr[j]<arr[small]){
            small=j; }

        }
        swap(arr[i] , arr[small]);
    }

}

void print1(vector<int>arr ,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {4,1,5,2,3};
    int n=5;
    st(arr , n);
    print1(arr , n);
}