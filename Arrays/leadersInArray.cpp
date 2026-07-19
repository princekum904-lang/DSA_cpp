// leader is the element if every element on the right of it is smaller than it

#include<bits/stdc++.h>

using namespace std;

vector<int> leaders(vector<int> &arr){
    int maxi = INT_MIN;
    int n = arr.size();
    vector<int> ans;

    for(int i=n-1;i>=0;i--){
        if(maxi < arr[i]){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi , arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> ans;

    ans = leaders(arr);

    cout << "The leader of this array are :- ";

    for(auto it: ans){
        cout << it << " ";
    }
}