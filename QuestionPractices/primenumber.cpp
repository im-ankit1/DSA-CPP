#include<iostream>
using namespace std;

int prime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0)return false;
      for(int i = 3; i*i <= n; i+2){
        if(n%i==0){
            return false;
        }
    }

        return true;
}

int main(){
    int n = 13;
    if(prime(n)){
        cout<<"prime number";

    }
    else{
        cout<<"not prime";

    }

    return 0;
}