#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>num1 , vector<int>num2 , int m , int n){
    vector<int>num3;
    int i =0 ,j=0;
    while(i<m && j<n){
        if(num1[i]<num2[j]){
            num3.push_back(num1[i]);
            i++;
        }

        else{
            num3.push_back(num2[j]);
            j++;
        }
    }

    while(i<m){
        num3.push_back(num1[i]);
        i++;
    }

    while(j<n){
        num3.push_back(num2[j]);
        j++;
    }

    for(int k:num3){
        cout<<k<<" ";
    }
}
int main(){
    vector<int>num1={1,2,3,3};
    vector<int>num2={2,3,4,5};
    int m =num1.size();
    int n = num2.size();
    merge(num1,num2,m,n);
    return 0;
    
}