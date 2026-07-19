// TC= O(n log n) + O(2n)
// SC = O(n)

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>> &arr){
    int n = arr.size();

    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i =0; i<n ; i++){
        int start = arr[i][0];
        int end = arr[i][1];

        if(!ans.empty() && end<= ans.back()[1]){
            continue;
        }

        for(int j = i+1; j<n;j++){
            if(arr[j][0] <= end){
                end = max(end, arr[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start, end});
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