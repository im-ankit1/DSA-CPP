#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twosum(vector<int>& arr , int tar){
    unordered_map<int , int> m;
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        int first = arr[i];
        int sec = tar-first;
        if(m.find(sec)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
        
    }
    return ans;

} 
 
int main(){
    vector <int> arr = {2,3,5,7,1};
    int tar =9;
    vector<int>res = twosum(arr , tar);
    if(res.size() == 2){
        cout<<"values is : "<<arr[res[0]]<<" and "<<arr[res[1]]<<endl;
    }
    else{
        cout<<"Value not found!";
    }
    return 0;
}