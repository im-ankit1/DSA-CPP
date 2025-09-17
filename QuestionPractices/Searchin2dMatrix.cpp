#include<iostream>
#include<vector>
using namespace std;

// void matrixx(vector<vector<int>>& arr , int tar , int m ,int n){
//     for(int i=0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             if(arr[i][j] == tar){
//                 cout<<"value found at index : "<<i<<" "<<j;
//             }
//         }
//     }

// }

int matrix2(vector<vector<int>> arr , int tar){
    int m = arr.size();
    int n = arr[0].size();

    int left = 0 , right = n*m;
    int mid = left + (right - left)/2;
    while(left<=right){

        int midval = arr[mid/m][mid%n];
        if(midval == tar){
            return true;
        }
        else if(midval< tar){
            left = mid + 1;
        }

        else{
            right = mid -1;
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 9;
    // int m=4;
    // int n =4;
    // matrixx(matrix , target , m , n);

    if(matrix2(matrix , target)){
        cout<<"val found";
    }

    else{
        cout<<"not found";
    }
    return 0;
}