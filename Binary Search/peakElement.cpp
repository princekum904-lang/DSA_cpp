// there can be multiples peaks, just return one peak
// element before and after, first and last elements are assumed to be -infinty

#include<bits/stdc++.h>

using namespace std;

int peakElement(vector<int> &arr){
    int n = arr.size();

    if(n==1){
        return arr[0];
    }
    if(arr[0] > arr[1]){
        return arr[0];
    }
    if(arr[n-1] > arr[n-2]){
        return arr[n-1];
    }

    int low=1, high = n-2, mid;

    while(low<=high){
        mid = low + (high-low)/2;

        if((arr[mid]>arr[mid-1]) && (arr[mid] > arr[mid+1])){
            return arr[mid];
        }
        else if(arr[mid] > arr[mid-1]){
            low = mid + 1;
        }
        else if(arr[mid] > arr[mid+1]){
            high = mid - 1;
        }
        else{
            low = mid + 1; // high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array acc to question :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int peak = peakElement(arr);

    cout << "The peak element is :- " << peak;
}