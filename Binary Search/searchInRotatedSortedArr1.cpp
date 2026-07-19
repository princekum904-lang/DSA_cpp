// all elements are unique

#include<bits/stdc++.h>

using namespace std;

int searchElement(vector<int> &arr, int target){
    int n = arr.size();

    int low = 0 , high = n-1;
    int mid;

    while(low<=high){

        mid = (low+high)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] >= arr[low]){  //left half is sorted
            if(target <= arr[mid] && target >= arr[low]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{  // right half is the sorted one
            if(target >= arr[mid] && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter a rotated Sorted Array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter a element to search in the array :- ";
    cin >> target;

    int index = searchElement(arr,target);

    if(index == -1){
        cout << "Element not found ";
    }
    else{
        cout << "Element found at index :- " << index;
    }


}