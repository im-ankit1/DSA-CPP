#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string comp(string s){
    int n= s.length();
    int idx=0;

    for(int i =0; i< n; i++){
        char ch = s[i];
        int count = 0;

        while(i<n && s[i]==ch){
            count++;
            i++;

        }

        if(count == 1){
            s[idx]=ch;
            idx++;
        }

        else{
            s[idx]=ch;
            idx++;
            string str = to_string(count);
            for(int j =0; j<str.length(); j++){
                char dig = str[j];
                s[idx]=dig;
                idx++;
            }
            i--;
        }
    }

     
    return s;
}

int main (){
    string chars = "aabbccc";
    string result = comp(chars);
    cout<<result;
    return 0;
}