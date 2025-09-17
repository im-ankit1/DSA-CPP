#include<iostream>
using namespace std;

 int checkpal(int n){
    int original = n;
    int number = 0;
    while(n>0){
        int digit = n%10;
        number = number*10+digit;
        n = n/10;
    }

    if(original==number){
        return true;
    }

    else{
        return false;
    }
 }

 int main(){
    int n = 121;

    if(checkpal(n)== 1){
        cout<<"number is palindrome";
    }

    else{
        cout<<"number is not palindrome";
    }

    return 0;
 }