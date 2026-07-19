#include<bits/stdc++.h>

using namespace std;


/* This is extra space complexity
void reverseArr(vector<int> &arr, int st, int end){
    stack<int> s;
    for(int i=st;i<=end;i++){
        s.push(arr[i]);
    }
    for(int i=st;i<=end;i++){
        arr[i] = s.top();
        s.pop();
    }
}
*/

void reverseArr(vector<int> &arr, int st, int end) {
    while (st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

void leftRotateArray(vector<int> &arr, int k) {
    int n = arr.size();

    if (n == 0)
        return;

    k %= n;

    reverseArr(arr, 0, k - 1);  //reverse function can also be used (stl)- reverse(first iterator, end iterator) 
    reverseArr(arr, k, n - 1); // reverse(arr.begin()+k , arr.end())
    reverseArr(arr, 0, n - 1); //reverse(arr.begin() , arr.end())
}

void leftRotateArray(vector<int> &arr,int n, int k){

    if(n<=0){
        cout << "Enter a valid array size\n";
        return;
    }

    k = k%n;

    reverseArr(arr,0,k-1);
    reverseArr(arr,k,n-1);
    reverseArr(arr,0,n-1);
    

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

    int k;
    cout << "Enter the value bby which you want to left rotate the array :- ";
    cin >> k;

    leftRotateArray(arr,n,k);

    cout << "The array after left rotation is :- ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    


}