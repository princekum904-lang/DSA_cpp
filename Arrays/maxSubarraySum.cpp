// KANDANE's ALGO
// the subarray with maximum sum, return the sum

#include<bits/stdc++.h>

using namespace std;

int maximumSubarrSum(vector<int> &arr){
    int n = arr.size();

    int maxSum = INT_MIN;
    int sum = 0;

    for(int i=0;i<n;i++){
        if(sum < 0){
            sum = 0;
        }
        sum = sum + arr[i];

        maxSum = max(maxSum, sum);
    }
    return maxSum;
}



int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array :- ";

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    int maxSum = maximumSubarrSum(arr);

    cout << "The maximum Subarray Sum is :- " << maxSum;

}