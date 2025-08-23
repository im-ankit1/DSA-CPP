#include<iostream>
#include<vector>
using namespace std;

void slidingwindow(vector<int>& arr){
    vector<int> ans;
    int  k =3;
    for(int i = 0; i<=arr.size()-k; i++){
        int max = arr[i];
        for(int j=i; j<i+k; j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }
        ans.push_back(max);
    }

    for(int p:ans){
        cout<<p<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> arr = {1,2,3,4,5};
    slidingwindow(arr);
    return 0;
}