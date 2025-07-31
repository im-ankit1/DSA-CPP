#include<iostream>
using namespace std;

int fac(int n){
    if(n==1) return 1;
    return n*fac(n-1);
}
int main(){
    int n=6;
    int res = fac(n);
    cout<<"factorial is :"<<res<<endl;
    return 0;
}