#include<bits/stdc++.h>

using namespace std;

int findSingleElement(vector<int> &arr){

    int n = arr.size();

    if(n==1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    int low = 1, high = n-2, mid;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }
        // else if( mid%2 == 0){ // mid is even
        //     if(arr[mid+1] == arr[mid]){ 
        //         low = mid+1;
        //     }
        //     else{
        //         high = mid-1;
        //     }
        // }
        // else{ // mid is odd index
        //     if(arr[mid] == arr[mid+1]){ //we in right half
        //         high = mid-1;
        //     }
        //     else{
        //         low = mid+1;
        //     }
        // }

        if((mid%2==1 && arr[mid-1] == arr[mid]) || (mid%2==0 && arr[mid] == arr[mid+1])){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array in sorted order, (only 1 element appears single time, all others appear twice) :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int singleElement = findSingleElement(arr);

    cout << "The single element in the array is :- " << singleElement;


}