// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> spiral(vector<vector<int>>& mat){
//     if (mat.empty() || mat[0].empty()) return {};
//     int m = mat.size();
//     int n = mat[0].size();
//     int srow=0 , scol=0, erow=m-1, ecol=n-1;
//     vector<int>ans;
//     while(scol<=ecol && srow<=erow){
//     //top
//     for(int i =scol; i<=ecol; i++){
//         ans.push_back(mat[srow][i]);
//     }

//     //right
//     for(int j = srow+1; j<=erow; j++){
//         ans.push_back(mat[j][ecol]);
//     }

//     //bottam
//     for(int i = ecol-1; i>=scol; i++){
//         ans.push_back(mat[erow][i]);
//     }

//     //left
//     for(int j=erow-1; j>=srow+1; j++ ){
//         ans.push_back(mat[j][scol]);
//     }
//     scol++; srow++; ecol--; erow--;
//     }

//     return ans;
// }

// int main(){
//     vector<vector<int>> matrix = {{1,2,3,4} , {5,6,7,8}, {9,10,11,12} , {13,14,15,16}};
//     vector<int>result = spiral(matrix);
//     for(int i =0; i<result.size(); i++){
//         cout<<result[i]<<" ";
//     }

//     cout<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiral(vector<vector<int>>& mat){
     

    int m = mat.size();
    int n = mat[0].size();
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    vector<int> ans;

    while(scol <= ecol && srow <= erow){
        // top row
        for(int i = scol; i <= ecol; i++){
            ans.push_back(mat[srow][i]);
        }

        // right column
        for(int j = srow + 1; j <= erow; j++){
            ans.push_back(mat[j][ecol]);
        }

        // bottom row (only if not same as top row)
        if(srow < erow){
            for(int i = ecol - 1; i >= scol; i--){
                ans.push_back(mat[erow][i]);
            }
        }

        // left column (only if not same as right column)
         
            for(int j = erow - 1; j > srow; j--){
                ans.push_back(mat[j][scol]);
            
        }

        // move to inner layer
        srow++; scol++; erow--; ecol--;
    }

    return ans;
}

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result = spiral(matrix);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}
