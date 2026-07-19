#include<bits/stdc++.h>

using namespace std;

void mergeArr(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = n1-1;
    int j = 0;

    while(i>=0 && j<n2){
        if(arr1[i] >= arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}

int main(){
    int n1;
    cout << "Enter the size of the array 1 :- ";
    cin >> n1;

    vector<int> arr1(n1);

    cout << "Enter the elements in the array 1 :- ";

    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the size of the array 2:- ";
    cin >> n2;

    vector<int> arr2(n2);

    cout << "Enter the elements in the array 2 :- ";

    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    cout << "\n\n\n";

    mergeArr(arr1,arr2);

    cout << "The Array 1 is :- ";

    for(int num : arr1){
        cout << num << " ";
    }

    cout << "\n\n";

    cout << "The Array 2 is :- ";
    for(int num : arr2){
        cout << num << " ";
    }



}