#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge (vector<int>& arr , const vector <int>& arr1 , int m , int n) {
     
    int idx = m+n-1 , i = m-1 , j = n-1;
    while(i>=0 && j>=0){
        if(arr1[j]>arr[i]){
            arr[idx]=arr1[j];
            idx--;
            j--;
        }
        else{
            arr[idx]=arr[i];
            idx--;
            i--;
        }
    }
  
    while(j>=0){
        arr[idx]=arr1[j];
        idx--;
        j--;
    }
}

void printt(const vector<int>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    vector<int> arr = {1,2,3 , 0, 0, 0};
    vector<int> arr1 = {4,5,6};
    int m =3, n=3;
    
    merge(arr , arr1 , m , n);
    printt(arr);
    return 0;

}