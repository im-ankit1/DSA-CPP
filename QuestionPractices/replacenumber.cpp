#include<iostream>
#include<vector>
using namespace std;

vector<int> replace(vector<int>& arr){
    int first = arr[0];
    int last = arr.size()-1;
    int sum = first + last;

    if(arr.empty()) return arr;

    for(int i =0; i<arr.size(); i++){
        if(arr[i]%first == 0){
            arr[i] = sum;
        }
    }

    return arr;
}
int main(){
  vector<int> arr = {3, 6, 9, 10, 12, 15};

    vector<int> result = replace(arr);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
    
}