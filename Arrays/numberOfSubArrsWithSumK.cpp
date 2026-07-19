#include<bits/stdc++.h>

using namespace std;

int numOfSubarr(vector<int> &arr, int k){
    int prefixSum = 0;
    int n = arr.size();
    int count = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;

    for(int i =0;i<n;i++){

        prefixSum = prefixSum + arr[i];
        int rem = prefixSum - k;

        count = count + mpp[rem];

        mpp[prefixSum]++;
    }
    return count;
}

int numOfSubArrSumK(vector<int> &arr, int k){
    map<int , int> prefixSumMap;

    int n = arr.size();

    int prefixSum = 0;
    int sum = 0 , count = 0;

    for(int i =0;i<n;i++){
        prefixSum = prefixSum + arr[i];

        if(prefixSum == k){
            count++;
        }

        int rem = prefixSum - k;

        if(prefixSumMap.find(rem) != prefixSumMap.end()){
            count = count + prefixSumMap[rem];
        }

        prefixSumMap[prefixSum]++;  
        
    }

    return count;
}


int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array :- ";
    
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k :- ";
    cin >> k;

    int count = numOfSubArrSumK(arr,k);

    cout << "The number of subarrays with sum " << k << " is :- " << count;


}