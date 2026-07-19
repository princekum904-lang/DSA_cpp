// it is done using merge sort. inversions are (x,y) -> x>y and i<j

#include<bits/stdc++.h>

using namespace std;

int mergeArr(vector<int> &arr, int start , int mid,int end);

int mergeSort(vector<int> &arr, int start, int end){
    int count = 0;
    if(start>=end){
        return count;
    }
    int mid = start + (end-start)/2;
    count = count + mergeSort(arr,start,mid);
    count = count + mergeSort(arr,(mid+1),end);
    count = count + mergeArr(arr,start,mid,end);

    return count;

}

int mergeArr(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;

    int left = start;
    int right = mid+1;
    int count = 0;  

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count += mid-left+1;
            right = right+1;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= end){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i - start];
    }

    return count;
}


int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int count = mergeSort(arr,0,n-1);

    cout << "The number of inversions in the array is :- " << count;
}