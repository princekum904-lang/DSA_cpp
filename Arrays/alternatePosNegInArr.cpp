
#include<bits/stdc++.h>

using namespace std;

vector<int> rearrange(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n);

    int pos = 0 , neg = 1;

    for(int i =0 ; i<n;i++){
        if(arr[i] > 0){
            ans[pos] = arr[i];
            pos += 2;
        }
        else{
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    return ans;
}



int main(){
    int n;
    cout << "Enter the size of the array (even size) :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array (half positive and half negative) :- ";

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    vector<int> ans;

    ans = rearrange(arr);

    cout << "The Reaaranged Array is :- ";

    for(auto it : ans){
        cout << it << " ";
    }



    
}