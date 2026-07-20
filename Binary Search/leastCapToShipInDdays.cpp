#include<bits/stdc++.h>

using namespace std;

int daysTaken(vector<int> &arr, int capacity){
    int n = arr.size();
    int daysUsed = 1, load = 0;

    for(int i=0;i<n;i++){
        if(load + arr[i] > capacity){
            daysUsed++;
            load = arr[i];
        }
        else{
            load += arr[i];
        }
    }
    return daysUsed;
}

int minCapacity(vector<int> &arr, int days){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int mid; int ans = -1;

    while(low<=high){
        mid = low + (high-low)/2;

        int days_Taken = daysTaken(arr,mid);

        if(days_Taken<=days){
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

    cout << "Enter the elements in the array acc to the question :- ";

    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Enter the number of days within which the packages are to be shipped :- ";
    int days;
    cin >> days;

    int ans = minCapacity(arr,days);

    cout << "The required answer is :- " << ans;


}