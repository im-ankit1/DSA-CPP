#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reversestr(string s){
    int n=s.length();
    string ans = "";
    reverse(s.begin() , s.end());
    for(int i =0; i<n; i++){
        string word="";
        while(i<n && s[i]!=' '){
            word = word+s[i];
            i++;
        }
        reverse(word.begin() , word.end());
        if(word.length()>0){
            ans = ans+" "+word;
        }
    }

    return ans.substr(1);

}

void substr(string ans){
    cout<<ans;
}

int main(){
    string s = "the sky is blue";
    string result = reversestr(s);
    substr(result);

    return 0;
}