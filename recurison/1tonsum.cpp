#include<iostream>
using namespace std;
int summ(int n){
    if(n==1){
        return 1;
    }
    int m= n + summ(n-1);
    return m;
}

int main(){
    int n=6;
    int res = summ(n);
    cout<<"sum is : "<<res<<endl;
    return 0;
}