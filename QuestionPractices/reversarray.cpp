#include<iostream>
#include<vector>
using namespace std;

int reversearray(int arr[] , int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main(){
int arr[5] = {1,2,3,4,5};

reversearray(arr , 5);

for(int i =0; i<5; i++){
    cout<<arr[i]<<" ";
}

return 0;

}