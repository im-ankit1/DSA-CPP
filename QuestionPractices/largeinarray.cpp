#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int large = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }

    cout<<large;
    return 0;
}