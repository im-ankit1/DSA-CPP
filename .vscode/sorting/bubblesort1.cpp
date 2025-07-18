#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int>& arr , int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
        
    }
    
}
void printarray(vector<int> arr , int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    vector <int> arr = {4,9,8,6,1,5,2,3,7 };
    int n = 9;
    bubble(arr , n);
    printarray(arr,n);

    return 0;
}