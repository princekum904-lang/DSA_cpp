#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>> &arr){
    int n = arr.size();

    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1] = max(arr[i][1] , ans.back()[1]);
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));

    cout << "Enter the intervals (start end):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    vector<vector<int>> ans;

    ans = mergeInterval(arr);

    cout << "The new intervals in the array is :- ";

    for(int i=0;i<ans.size();i++){
        cout << "(" << ans[i][0] << " , " << ans[i][1] << ") , ";
    }



}