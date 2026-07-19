// elements appearing more than n/3 times

#include<bits/stdc++.h>

using namespace std;

vector<int> majoElement(vector<int> &arr){
    int n = arr.size();

    int el1 = INT_MIN, el2 = INT_MAX;
    int c1 =0, c2 =0;

    for(int i=0;i<n;i++){
        if(c1 == 0 && el2 != arr[i]){
            c1 = 1;
            el1 = arr[i];
        }
        else if(c2 == 0 && el1 != arr[i]){
            c2 = 1;
            el2 = arr[i];
        }
        else if(el1 == arr[i]){
            c1++;
        }
        else if(el2 == arr[i]){
            c2++;
        }
        else{
            c1-- , c2--;
        }
    }

    vector<int> ans;
    int ct1 = 0, ct2 = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == el1)
            ct1++;
        if(arr[i] == el2)
            ct2++;
    }

    int mini = (int)(n/3) + 1;

    if(ct1 >= mini){
        ans.push_back(el1);
    }
    if(ct2 >= mini){
        ans.push_back(el2);
    }

    sort(ans.begin(),ans.end());
    

    return ans;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> ans;

    ans = majoElement(arr);

    if(ans.size() == 0){
        cout << "There is no element that appears more than n/3 times :- ";
    }
    else{
        cout << "The elements which appear more than " << (int)(n/3) << " times :- ";

        for(auto it : ans){
            cout << it << " ";
        }
    }
    
}