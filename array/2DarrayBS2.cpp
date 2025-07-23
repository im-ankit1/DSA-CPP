#include<iostream>
#include<vector>
using namespace std;

bool sr(vector<vector<int>>& mat , int tar){
    int m= mat.size(); //row size
    int n = mat[0].size(); //coloumn size
    int r = 0, c=n-1;
    while(c>=0 && r<m){
        if(tar == mat[r][c]){
            return true;
        }
        else if(tar<mat[r][c]){
            c--;
        }
        else{
            r++;
        }
}
}

int main(){
    vector<vector<int>> matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    int tar = 5;
    cout<<sr(matrix , tar)<<endl;
}