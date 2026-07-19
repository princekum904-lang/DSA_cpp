#include<bits/stdc++.h>

using namespace std;


vector<int> unionOfArr(vector<int> &arr1, vector<int> &arr2){

    int n1 = arr1.size();
    int n2 = arr2.size();

    int i=0 , j=0;
    vector<int> unionArr;

    
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            if( unionArr.size() == 0 || unionArr.back() != arr1[i] ){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if( unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }else {
            // Equal elements
            if(unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;

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

    cout << "Enter " << n1 << " elements in the array 2:- ";

    for(int i =0; i<n2; i++){
        cin >> arr2[i];
    }

    vector<int> unionArr;


    unionArr = unionOfArr(arr1,arr2);

    cout << "The Union of these 2 Arrays is :- ";

    for(auto it : unionArr){
        cout << it << " ";
    }

    

    

    
}