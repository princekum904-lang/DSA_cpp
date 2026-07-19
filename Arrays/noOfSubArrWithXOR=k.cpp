#include<bits/stdc++.h>

using namespace std;

int subarrayXorK(vector<int> &arr, int k){

    int n = arr.size();

    unordered_map<int, int> mpp;

    int xr =0;
    mpp[xr] = 1;
    int count = 0;

    for(int i=0;i<n;i++){
        xr = xr^arr[i];
        int x = xr^k;
        count = count + mpp[x];
        mpp[xr]++;
    }

    return count;

}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k :- ";
    cin >> k;

    //int count = subarrayXork(arr,k);

    int count = subarrayXorK(arr,k);


    cout << "The number of sub arrays are :- " << count;



}