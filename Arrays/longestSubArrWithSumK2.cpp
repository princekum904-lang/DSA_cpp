// Optimal Solution when the Array has only positive numbers and zeroes

#include<bits/stdc++.h>

using namespace std;

int longestSubArr(vector<int> &arr, int k){

    int n = arr.size();
    int i = 0 , j = 0;
    int sum = 0;
    int maxLength =0;

    while(j<n){
        
        sum = sum + arr[j];

        while(i<=j && sum > k){
            sum = sum - arr[i];
            i++;
        }

        if(sum == k){
            maxLength = max(maxLength, j-i+1);
        }

        j++;
    
    }

    return maxLength;

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

    int k;
    cout << "Enter the value of k :- ";
    cin >> k;

    int maxLength = longestSubArr(arr,k);

    cout << "Longest Sub Array Length is :- " << maxLength;


}