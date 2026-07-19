/* Uniques elements hai sab

    CLOCKWISE ROTATION

*/

#include<bits/stdc++.h>

using namespace std;

int findTimesRotated(vector<int> &arr){
    int n = arr.size();
    int low =0,high = n-1;
    int mid;
    int ans = INT_MAX;
    int ind = -1;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[low] <arr[high]){
            ans = arr[low];
            ind = low;
            break;
        }

        if(arr[low] <= arr[mid]){
            
            if(ans>arr[low]){
                ans = arr[low];
                ind = low;
            }

            low = mid + 1;
        }
        else{
            if(ans>arr[mid]){
                ans = arr[mid];
                ind = mid;
            }
            high = mid - 1;
        }
    }
    return ind;
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

    int ind = findTimesRotated(arr);

    cout << "The no. of times array is rotated :- " << ind;
}