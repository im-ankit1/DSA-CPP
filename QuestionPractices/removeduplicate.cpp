#include<iostream>
using namespace std;

void removeduplicate(int arr[] , int size){
    int m =0;
    int ans[size];
    
    for(int i = 0 ; i<size; i++){
        if(i==size-1 || arr[i] != arr[i+1]){
            ans[m]=arr[i];
            m++;
        }
    }

    for(int j=0; j<m; j++){
        cout<<ans[j]<<" ";
    }
    

}

int main(){
    int arr[5] = {1,2,2,3,3};
    int size = 5;
    removeduplicate(arr , size);
    return 0;
}