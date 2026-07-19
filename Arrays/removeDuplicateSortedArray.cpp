#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &arr, int n){

    int i =0 , j =1;

    while(j<n){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    return i+1;
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

    int uniqueElement = removeDuplicates(arr,n);

    cout << "Number of Unique elments are :- " << uniqueElement << "\n";

    for(int i = 0; i<uniqueElement; i++){
        cout << arr[i] << " ";
    }


}