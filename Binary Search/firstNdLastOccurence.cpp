//arr sorted in ascending order

#include<bits/stdc++.h>

using namespace std;

int firstOccurence(vector<int> &arr, int target){
    int n = arr.size();

    int first = -1;
    int low = 0,high =n-1,mid;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurence(vector<int> &arr, int target){

    int n = arr.size();

    int last = -1;
    int low = 0,high =n-1,mid;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return last;
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

    int first = firstOccurence(arr,target);
    int last = lastOccurence(arr,target);
    

    cout << "{ " << first << " , " << last << " }";

}