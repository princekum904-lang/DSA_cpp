// elements can repeat in the array, just have to tell wheather the element exists or not

#include<bits/stdc++.h>

using namespace std;

bool searchElement(vector<int> &arr, int target){

    int n = arr.size();

    int low = 0, high = n-1;
    int mid;

    while(low<=high){
        mid = (low + high)/2;

        if(arr[mid] == target){
            return true;
        }

        if(arr[mid] == arr[low] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
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

    return false;
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

    bool index = searchElement(arr,target);

    if(index == false){
        cout << "Element not found ";
    }
    else{
        cout << "Element found at index :- ";
    }


}