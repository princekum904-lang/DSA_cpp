#include<bits/stdc++.h>

using namespace std;


void moveZeroesToEnd(vector<int> &arr){
    int n = arr.size();

    int j =-1;
    for(int i =0; i<n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }

    if(j== -1){
        return;
    }

    int i = j+1;
    while(i<n){
        if(arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }
        i++;
    }
}


int main(){

    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array :- ";

    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    cout << "The resultant array is :- ";

    moveZeroesToEnd(arr);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    
}