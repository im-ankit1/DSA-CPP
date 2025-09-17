#include<iostream>
#include<vector>
using namespace std;

int buysell(vector<int> arr){
    int minprice = INT8_MAX;
    int maxprofit = 0;

    for(int price : arr){
        if(price<minprice){
            minprice = price;
        }

        int profit = price - minprice;

        if(maxprofit<profit){
            maxprofit = profit;
        }
    }

    return maxprofit;

}

int main(){
    vector<int>arr = {1,2,3,4,5};
    int res = buysell(arr);
    cout<<res;
    return 0;
}