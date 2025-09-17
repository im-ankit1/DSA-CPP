#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

vector<int> RPval(vector<vector<int>> arr){
    vector<int> ans;
    unordered_set<int> s;
    int n = arr.size();
    int a=0, b=0 , Asum=0 , Esum =0;
    
    for(int i=0; i<n; i++){
        for(int j = 0; i<n; j++){
            Asum = Asum+arr[i][j];
            if(s.find(arr[i][j]) != s.end()){
                a = arr[i][j];
                ans.push_back(a);
            }
            s.insert(arr[i][j]);
        }
    }

    Esum = (n * n * (n * n + 1)) / 2;
    b = Asum + a - Esum;
    ans.push_back(b);
    return ans;
}

int main(){
    int a, b;
    cout << "Enter the row and column of matrix: ";
    cin >> a >> b;

    vector<vector<int>> arr(a, vector<int>(b)); // initialize matrix

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> res = RPval(arr);

    cout << "Repeated: " << res[0] << endl;
    cout << "Missing: " << res[1] << endl;
    return 0;
}
