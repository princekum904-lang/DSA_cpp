#include<bits/stdc++.h>

using namespace std;

void mergeArr(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    int len = n+m;

    int gap = (len/2) + (len%2);

    while(gap > 0){
        int left = 0;
        int right = left + gap;

        while(right < len){
            //arr1 and arr2
            if(left < n && right >= n){
                if(arr1[left] > arr2[right-n]){
                    swap(arr1[left],arr2[right-n]);
                }
                left++;
                right++;
            }
            else if(left >= n){
                if(arr1[left-n] > arr2[right-n]){
                    swap(arr1[left-n],arr2[right-n]);
                }
                left++;
                right++;
            }
            else {
                if(arr1[left] > arr2[right]){
                    swap(arr1[left],arr2[right]);
                }
                left++;
                right++;
            }
        }
        if(gap == 1)
            break;

        gap = (gap/2) + (gap%2);
    }
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