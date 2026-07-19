// MOORE's VoTING ALGO
// majority element if exists, it should appear more than (n/2) time

#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();

    int el, ct = 0;

    for(int i=0;i<n;i++){
        if(ct == 0){
            ct =1;
            el = arr[i];
        }
        else if(el == arr[i]){
            ct++;
        }
        else{
            ct--;
        }
    }

    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == el){
            count++;
        }
    }
    if(count > n/2){
        return el;
    }
    else{
        return INT_MIN;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array :- ";

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    int element = majorityElement(arr);

    if(element == INT_MIN){
        cout << "There is no majority Element in the array";
    }
    else{
        cout << "The majority element in the array is :- " << element;
    }
   

}