#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> missingval(vector<vector<int>>& arr){
    unordered_set<int> s;
    vector<int> ans;
    int n=arr.size();
    int acsum = 0 , axsum = 0 ,a,b;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++ ){
            acsum = acsum+arr[i][j];
            if(s.find(arr[i][j])!=s.end()){
                a=arr[i][j];
                ans.push_back(a);
            }
            s.insert(arr[i][j]);
        }

    }
    axsum = (n*n*(n*n+1))/2;
    b=axsum+a-acsum;
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> arr = {{1,2,2} , {4,5,6}, {7,8,9}};
    vector<int> res = missingval(arr);
     
        cout<<"repated number : "<<res[0]<<endl;
        cout<<"missing number : "<<res[1]<<endl;
    
    

    return 0;
}