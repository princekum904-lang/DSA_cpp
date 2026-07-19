// n=6, an array contains number from 1 to 6, find missing and the repeating number

#include<bits/stdc++.h>

using namespace std;

vector<long long> missingAndRepeating(vector<long long> &arr){
    long long n = arr.size();

    long long sumOfN , sqSumOfN;
    long long arrSum = 0 , arrSqSum = 0;

    vector<long long> ans(2);

    sumOfN = (n*(n+1))/2;
    sqSumOfN = (n*(n+1)*(2*n+1))/6;

    for(long long i=0;i<n;i++){
        arrSum = arrSum + arr[i];
        arrSqSum = arrSqSum + (arr[i]*arr[i]);
    }

    if(sumOfN == arrSum){
        return {-1,-1};
    }

    long long x , y;  // x = repeating element, y = missing element

    long long diff = arrSum - sumOfN; // x - y
    long long sqDiff = arrSqSum - sqSumOfN;  // x^2 - y^2

    x = ((sqDiff/diff) + diff)/2;
    y = x - diff;


    ans = {x,y};

    return ans;

}

int main(){
    long long n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<long long> arr(n);

    cout << "Enter the elements in the array (1 to n, but one number should be repeating and any other should be missing :- ";

    for(long long i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > n || arr[i] < 1){
            cout << "Wrong Input In the Array";
            return 0;
        }
    }

    vector<long long> ans = missingAndRepeating(arr);

    if(ans[0] == -1){
        cout << "No missing or repeating element";
    }
    else{
        cout << "Repeating Element :- " << ans[0] << "\n" << "Missing Element :- " << ans[1]; 
    }



}