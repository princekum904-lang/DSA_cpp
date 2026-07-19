#include<bits/stdc++.h>

using namespace std;

long long maxProd(vector<int> &arr){
    int n = arr.size();

    long long preP = 1 , sufP = 1;
    long long maxi = INT_MIN;

    for(int i=0;i<n;i++){

        if(preP == 0) preP = 1;
        if(sufP == 0) sufP = 1;

        preP = preP * arr[i];
        sufP = sufP * arr[n-i-1];

        maxi = max(maxi, max(preP,sufP));

    }

    return maxi;

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

    long long maxProduct  = maxProd(arr);

    cout << "The maximum subarray product is :- " << maxProduct;
}