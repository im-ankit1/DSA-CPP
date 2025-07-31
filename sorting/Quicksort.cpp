#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pivot(vector<int>& arr ,int st ,int end){
    int idx = st-1 , pe = arr[end];
    for(int j = st; j<end; j++){
        if(arr[j]<=pe){
            idx++;
            swap(arr[j] , arr[idx]);
        }

    }
    idx++;
    swap(arr[idx]  , arr[end]);

    
    return idx;
}


void qs(vector<int>& arr , int st , int end){
    
    if(st<end){
    int pidx = pivot(arr , st , end);
    qs(arr , st , pidx-1);
    qs(arr , pidx+1 , end);
    }
}


int main(){
vector<int> arr = {1, 5, 4, 3, 6, 2};
int st = 0 , end = arr.size()-1; 
qs(arr , st , end);
for(int i : arr){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}