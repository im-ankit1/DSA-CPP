#include<iostream>
#include<vector>
using namespace std;

void printper(vector<int> & arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
void getper(vector<int>& arr , int n , int idx ){
    vector<vector<int>> ans;
    if(idx == n ){
        printper(arr);

    }
         
    for(int i =idx; i<n ; i++){
        swap(arr[idx] , arr[i]);
        getper(arr , n , idx+1);
        swap(arr[idx] , arr[i]);
    }


}

int main(){
    vector<int> arr = { 1, 2, 3, 4};
    int n= arr.size();
    getper(arr , n , 0);
    return 0;
    

}