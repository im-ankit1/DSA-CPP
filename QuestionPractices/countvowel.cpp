#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){
    string s = "hello world";
    int vowel = 0 , consonent = 0;
    for(char i = 0; i<s.length(); i++){
        tolower(s[i]);

        if(isalpha(s[i])){

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]=='u'){
            vowel++;
        }

        else{
            consonent++;
        }
    }
    }

    cout<<"vowels = "<<vowel<<endl;
    cout<<"consonent = "<<consonent;

    return 0 ;
}