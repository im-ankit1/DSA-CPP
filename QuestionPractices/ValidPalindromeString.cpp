#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool valid(string s){
    int left =0 , right = (int)s.size()-1;
    while(left<=right){
        while(left<=right && !isalnum(s[left])) left++;
        while(left<=right && !isalnum(s[right])) right--;

         

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        

    }

    return true;
}

int main(){
    string s = {"A man, a plan, a canal: Panama"};
    bool res = valid(s);
    if(res == true){
        cout<<"pal";
    }
    else{
        cout<<"not pal";
    }

    return 0;
}