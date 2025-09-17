#include<iostream>
#include<vector>
using namespace std;

int container(vector<int> height){
    int left=0 , right = height.size()-1;
    int maxwater = 0;

    while(left<right){
        int h = min(height[left] , height[right]);
        int w = right - left;
        int currwater =  h*w;
        maxwater =  max(currwater , maxwater);

        if(height[left]<height[right]){
            left++;
        }

        else{
            right--;
        }
    }

    return maxwater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<container(height)<<endl;
    return 0;
}