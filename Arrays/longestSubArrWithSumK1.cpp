//optimal code for if the arr contains positive , negative and zeores

#include<bits/stdc++.h>

using namespace std;

int longestSubArr(vector<int> &arr, int k){

    int n = arr.size();

    map<long long , int> preSumMap;
    int sum =0;
    int maxLength = 0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(sum == k){
            maxLength = max(maxLength , i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int l = i - preSumMap[rem];
            maxLength = max(maxLength, l);
        }
        if(preSumMap.find(sum) == preSumMap.end()){  //ye tab hi chlega agr pehele se vo sum exist nhi krta hoga, zeroes aaege toh add ni krega
            preSumMap[sum] = i;
        }
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