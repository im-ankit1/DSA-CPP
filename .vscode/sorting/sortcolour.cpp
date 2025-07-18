#include<iostream>
#include<vector>
using namespace std;
void sortt(vector<int>& arr){
    int count0 = 0 , count1=0 , count2=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0){
            count0=count0+1;
        }
        else if(arr[i]==1){
            count1=count1+1;
        }
        else{
            count2=count2+1;
        }
    }
    int idx=0;
    for(int i=0; i<count0; i++){
        arr[idx]=0;
        idx++;
    }
    for(int i=0; i<count1; i++){
        arr[idx]=1;
        idx++;
    }
    for(int i =0; i<count2; i++){
        arr[idx]=2;
        idx++;
    }
}

void printt(vector<int>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int>arr = {0,1,1,2,1,0,2,0,2,0};
    sortt(arr);
    printt(arr);
    return 0;
}