//array should be sorted

#include<bits/stdc++.h>

using namespace std;

int upperBound(vector<int> &arr, int target){
    int n = arr.size();

    int ans = 10;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid] > target){
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

    cout << "Enter the elements in the array in ascending order :- ";

    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Enter the value of the target :- ";
    int target;
    cin >> target;


    int myFunUb = upperBound(arr,target);
    int inFunUb = upper_bound(arr.begin(),arr.end(),target) - arr.begin();

    cout << "The Upper Bound using written function is :- " << myFunUb << endl;
    cout << "The Upper Bound using in built function is :- " << inFunUb;
}