#include<bits/stdc++.h>

using namespace std;

bool possible(vector<int> &arr, int day,int m,int k){
    int count =0, nOfB = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] <= day){
            count++;
        }
        else{
            nOfB += count/k;
            count = 0;
        }
    }
    nOfB += count/k;

    if(nOfB >= m){
        return true;
    }
    else{
        return false;
    }
}

int minNoOfDays(vector<int> &arr, int m, int k){

    int n = arr.size();

    if(n<(long long)m*k){
        return -1;
    }
    int low = *min_element(arr.begin(),arr.end());
    int high = *max_element(arr.begin(),arr.end());
    int mid , ans = -1;

    while(low<=high){
        mid = low + (high-low)/2;

        if(possible(arr,mid,m,k) == true){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
 
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the element in the array acc to the question :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int m;
    cout << "Enter the number of bouquets to be made :- ";
    cin >> m;

    int k;
    cout << "Enter the number of flowers to make one bouquet :- ";
    cin >> k;

    int ans = minNoOfDays(arr,m,k);

    cout << "The required answer is :- " << ans;
}