#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
vector<vector<int>> threesum(vector<int>& arr){
    int n= arr.size();
    vector<vector<int>> ans;
    set<vector<int>> s;

    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> trip = {arr[i],arr[j],arr[k]};
                    sort(trip.begin() , trip.end());
                    if(s.find(trip)== s.end()){
                        ans.push_back(trip);
                        s.insert(trip);
                    }
                }


            }
        }
    }
return ans;

}

int main(){
    vector<int> arr = {1,-1,1,2,-3,0};
    vector<vector<int>>res = threesum(arr);
    for(int i =0; i<res.size(); i++){
        for(int j =0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;

}