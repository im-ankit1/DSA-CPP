#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& num1 , vector<int>num2 , int m  , int n){
    int i = m-1;
    int j = n-1;
    int k = m +n -1;
    while(i>=0 && j>=0){
        if(num1[i]<num2[j]){
            num1[k] = num2[j];
            k--;
            j--;
        }

        else{
            num1[k] = num1[i];
            k--;
            i--;
        }

    }

    while(j>=0){
        num1[k] = num2[j];
        k--;
        j--;
    }

for(int l : num1){
        cout<<l<<" ";
    }
     
}

int main(){
    vector<int>num1={1,2,3};
    vector<int>num2={2,3,4,5};
    int m =num1.size();
    int n = num2.size();
    merge(num1,num2,m,n);
    // for(int l : num1){
    //     cout<<l<<" ";
    // }

    return 0;

}