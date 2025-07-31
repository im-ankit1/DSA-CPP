#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
vector<vector<int>> foursum(vector<int>& arr, int tar){
    int n = arr.size();
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j =i+1; j<n;){
            int p=j+1, q=n-1;
            while(p<q){
                
                long long sum = (long long) arr[i] +  (long long) arr[j]+  (long long) arr[p] +  (long long) arr[q];
                if(sum<tar){
                    p++;
                }
                else if(sum>tar){
                    q--;
                }
                else{//sum==tar
                    ans.push_back({arr[i] , arr[j] ,arr[p] , arr[q]});
                    p++; q--;
                    while(p<q && arr[p]==arr[p+1]){p++;}
                }
            }
            j++;
            while(j<n && arr[j] == arr[j+1]){j++;}

        }

    }
    return ans;
}

int main(){
    vector<int> arr = {-2,-2,-1,-1,1,1,2,2};
    sort(arr.begin(),arr.end());
    int tar = 0;
     
    vector<vector<int>>res = foursum(arr,tar);
    for(int i =0; i<res.size(); i++){
        for(int j =0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}