#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> arr = {2,21,2,2,2,3};
//     int majority= -1;
//     for(int i = 0; i<arr.size(); i++){
//         int count = 0;
//         for(int j =0; j<arr.size(); j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             } 
//         }

//             if(count > arr.size()/2){
//                 majority=arr[i];
//                 break;
//             }
        
//     }

//     if(majority!= -1){
//         cout<<" majority of element is : "<<majority<<endl;
//     }
//     else{
//         cout<<"No major element";
//     }

//     return 0;
// }

int findCandidate(vector<int> arr){
    int candidate =-1;
    int count =0;
    for(int num : arr){
        if(count == 0){
            candidate= num;
            count =1;
        }

        else if(candidate == num){
            count ++;
        }

        else{
            count--;
        }
    }

    return candidate;
}

void findMajority(vector<int> arr, int candidate){
    int count = 0;
    for(int num:arr){
        if(num == candidate){
            count++;
        }
    }

    if(count > arr.size()/2){
        cout<<"majority element is : "<<candidate<<endl;
    }

    else{
        cout<<"No majority element";
    }
}

int main(){
    vector<int> arr = {1,32,2,2,23,4,3,2,2,2,2};
    int can = findCandidate(arr);
    findMajority(arr , can);
    return 0;
}