//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


//Xor method is better, cause for larger value of n, the sum will require long data type, so storage is slightly more

#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> &arr, int n){
    int size = arr.size();

    long long sum = (n*(n+1))/2;
    long long arrSum =0;

    for(int i=0;i<size;i++){
        arrSum = arrSum+arr[i];
    }

    return sum - arrSum;

}


int main(){

    int n;   // n = 5
    cout << "Enter the value of n :- ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter " << (n-1) << " elements in the array 1:- ";  // {1,2,4,5}   missing element is 3

    for(int i =0; i<n-1; i++){
        cin >> arr1[i];
    }

    int missingElement = missingNumber(arr1,n);

    cout << "Missing Element is :- " << missingElement;


    
}