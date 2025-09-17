#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

bool anagram(string s1 , string s2){
    if(s1.size() != s2.size()) return false;

  
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main(){
    string s1 = {"rat"};
    string s2 = {"tar"};

    if(anagram(s1 , s2)){
        cout<<"true";

    }

    else{
        cout<<"false";
    }

    return 0;
}