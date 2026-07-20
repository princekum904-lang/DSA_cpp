#include<bits/stdc++.h>

using namespace std;

bool checkDiv(vector<int> &arr, int th, int div){
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += ceil((double)(arr[i])/div);
    }
    if(sum <= th){
        return true;
    }
    else{
        return false;
    }
}

int minDiv(vector<int> &arr, int th){
    int n = arr.size();

    if(n>th){
        return -1;
    }

    int low = 1; //min nahi hoga
    int high = *max_element(arr.begin(),arr.end());
    int mid, ans = -1;

    while(low<=high){

        mid = low + (high-low)/2;

        if(checkDiv(arr,th,mid) == true){
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

    cout << "Enter the elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Enter the value of threshold :- ";
    int th;
    cin >> th;

    int ans = minDiv(arr,th);

    cout << "The required answer is :- " << ans;
}