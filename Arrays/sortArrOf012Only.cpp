//DUTCH NATIONAL FLAG ALGORITHM

#include<bits/stdc++.h>

using namespace std;

void sortArray(vector<int> &arr){
    int n = arr.size();
    int low, mid, high;

    low = 0 , mid = 0 , high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++ , mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
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

    sortArray(arr);

    cout << "The sorted Array is :- ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

   

}