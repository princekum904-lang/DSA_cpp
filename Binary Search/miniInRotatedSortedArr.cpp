/* Uniques elements hai sab


*/

#include<bits/stdc++.h>

using namespace std;

int findMin(vector<int> &arr){
    int n = arr.size();
    int low =0,high = n-1;
    int mid;
    int ans = INT_MAX;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[low] <arr[high]){
            ans = arr[low];
            break;
        }

        if(arr[low] <= arr[mid]){
            ans = min(ans,arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter a rotated Sorted Array, all elements are unique :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int mini = findMin(arr);

    cout << "The minimum element is :- " << mini;
}