#include<bits/stdc++.h>

using namespace std;


vector<int> intersectionOf2Array(vector<int> &A, vector<int> &B){

    int n1 = A.size();
    int n2 = B.size();

    vector<int> ans;

    int i =0 , j=0 ;

    while( i<n1 && j<n2){
        if( A[i] < B[j]){
            i++;
        }else if(A[i] > B[j]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }

    return ans;
}


int main(){

    int n1;
    cout << "Enter the size of the array 1 :- ";
    cin >> n1;
    int n2;
    cout << "Enter the size of the array 2:- ";
    cin >> n2;

    vector<int> arr1(n1) , arr2(n2);

    cout << "Enter " << n1 << " elements in the array 1:- ";

    for(int i =0; i<n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter " << n2 << " elements in the array 2:- ";

    for(int i =0; i<n2; i++){
        cin >> arr2[i];
    }

    vector<int> intersectionArr;

    intersectionArr = intersectionOf2Array(arr1,arr2);
    

    cout << "The Intersection of these 2 Arrays is :- ";

    for(auto it : intersectionArr){
        cout << it << " ";
    }

    

    

    
}