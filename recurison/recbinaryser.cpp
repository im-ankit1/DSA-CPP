#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> &arr , int st , int end , int tar){    
    if(st>end)return -1;

    int mid = (st + (end - st))/2;
    if(arr[mid]==tar) return 1;
    else if(arr[mid]>tar){
        return bs(arr , st , mid-1, tar);
    }
    else{
        return bs(arr , mid+1 , end , tar);
    }
}

int main(){
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int tar = 11;
    
    int st=0 , end = arr.size()-1;
     
    int res = bs(arr , st , end, tar);
    if (res == 1){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// // Recursive Binary Search
// int bs(vector<int>& arr, int st, int end, int tar){
//     if(st <= end){
//         int mid = st + (end - st) / 2;

//         if(arr[mid] == tar) 
//             return 1;

//         else if(arr[mid] > tar) 
//             return bs(arr, st, mid - 1, tar);

//         else 
//             return bs(arr, mid + 1, end, tar);
//     }

//     return -1;
// }

// int main(){
//     vector<int> arr = {-1, 0, 3, 5, 9, 12};
//     int tar = 11;

//     int res = bs(arr, 0, arr.size() - 1, tar);

//     if (res == 1){
//         cout << "element found";
//     } else {
//         cout << "element not found";
//     }

//     return 0;
// }
