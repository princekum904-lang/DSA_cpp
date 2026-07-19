// in sorted array 

#include<bits/stdc++.h>

using namespace std;

int findFloor(vector<int> &arr, int target){
    int n = arr.size();

    int low = 0, high = n-1;
    int mid;
    int ans = -1;
    while(low <= high){
        mid = (low+high)/2;

        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int findCeil(vector<int> &arr, int target){
    int n = arr.size();

    int low = 0, high = n-1;
    int mid;
    int ans = -1;
    while(low <= high){
        mid = (low+high)/2;

        if(arr[mid] >= target){
            ans = arr[mid];
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

    int floor = findFloor(arr,target);
    int ceil = findCeil(arr,target);

    cout << "The floor is :- (if -1 it means it does not exist) " << floor << endl;
    cout << "The Ceil is :- " << ceil;



}