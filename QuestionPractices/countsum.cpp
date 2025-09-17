#include<iostream>
using namespace std;

int count(int n){
    int countt =0;
    while(n>0){
        n = n/10;
        countt++;
    }

    return countt;

}

int sum(int n){
    int summ=0;
    while(n>0){
        int digit = n%10;
        summ = summ + digit;
        n = n/10;
    }

    return summ;
}

int main(){
    int i = 123;
    cout<<sum(i);
    cout<<count(i);
    return 0;
}