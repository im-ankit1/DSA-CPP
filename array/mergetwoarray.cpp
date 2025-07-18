#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(const vector<int>& arr1 ,const vector<int>& arr2 , vector<int>& arr ){
    int i =0 , j=0;
    while(i<arr1.size() && j<arr2.size()){

        if(arr1[i]<arr2[j]){
            arr.push_back(arr1[i]);
            i++;
        }
        else{
            arr.push_back(arr2[j]);
            j++;
        }


    }
    while(i<arr1.size()){
        arr.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        arr.push_back(arr2[j]);
        j++;
    }
     
}

void printt(const vector<int> &arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr1 = {1,3,2};
    vector<int> arr2 = {5,4,6 ,7 ,2 ,5};
    vector<int> arr;
    sort(arr1.begin() , arr1.end());
    sort(arr2.begin() , arr2.end());

    merge( arr1 , arr2, arr);
    printt(arr);
    return 0;
}