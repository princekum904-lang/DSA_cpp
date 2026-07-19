#include<bits/stdc++.h>

using namespace std;

int secondLargestElement(vector<int> &arr, int n){

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > secondLargest){
                secondLargest = arr[i];
        }
        
    }

    return secondLargest;
}



int main(){

    int n;

    printf("Enter the size of the array :- ");
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int secondLargest = secondLargestElement(arr,n);

    if (secondLargest == INT_MIN) {
        cout << "There is no distinct second largest element.\n";
    } else {
        cout << "The Second Largest Element is :- " << secondLargest << "\n";
    }


}