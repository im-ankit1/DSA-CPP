#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    // vector<int>:: reverse_iterator it;
    // for(it = arr.rbegin(); it!= arr.rend(); it++ ){
    //     cout<<*(it)<<" ";   }

//auto = vector<int>:: reverse_iterator

    for(auto it = arr.begin(); it!=arr.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
        return 0;

}