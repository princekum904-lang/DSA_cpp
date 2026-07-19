#include<bits/stdc++.h>

using namespace std;

pair<int ,int> twoSum(vector<int> &arr, int target){

    int n = arr.size();
    unordered_map<int , int> hashMpp;
    pair<int , int> p = {-1,-1};

    for(int i=0;i<n;i++){
        int req = target - arr[i];
        if(hashMpp.find(req) != hashMpp.end()){
            p = {hashMpp[req],i};
            return p;
        }
        hashMpp[arr[i]] = i;
    }
    return p;
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

    int target;
    cout << "Enter the value of Target :- ";
    cin >> target;

    pair<int , int> p;

    p = twoSum(arr, target);

    if(p.first == -1){
        cout << "Not found";
    }
    else{
        cout << "Found at index :- (" << p.first << " , " << p.second << ")";
    }


}