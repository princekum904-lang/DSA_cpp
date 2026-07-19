#include<bits/stdc++.h>

using namespace std;

int noThatAppearOnce(vector<int> &arr){
    int n = arr.size();

    int x = 0;
    for(int i=0; i<n;i++){
        x = x^arr[i];
    }

    return x;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array (all elements should be present twice except any one element) :- ";
    
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    int element = noThatAppearOnce(arr);
    
    cout << "No. that appear once is :- " << element;


}