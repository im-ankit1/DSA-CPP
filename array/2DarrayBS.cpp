#include<iostream>
#include<vector>
using namespace std;

bool FE(vector<vector<int>>& mat , int tar , int midrow){
    int n = mat[0].size();
    int st=0;
    int end = n-1;
    
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(tar == mat[midrow][mid]){
            return true;
        }
        else if (tar < mat[midrow][mid]){
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return false;
}

bool FR(vector<vector<int>>& mat , int tar){
    int m = mat.size();
    int n = mat[0].size();
    int st = 0;
    int end = m - 1;

    while(st <= end){
        int midrow = st + (end - st) / 2;
        if(mat[midrow][0] <= tar && mat[midrow][n - 1] >= tar){
            return FE(mat, tar, midrow);
        }
        else if(tar > mat[midrow][n - 1]) {
            st = midrow + 1;
        }
        else {
            end = midrow - 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}
    };
    
    int tar = 7;

    if (FR(matrix, tar) == true) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
