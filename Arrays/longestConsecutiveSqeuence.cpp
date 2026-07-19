#include<bits/stdc++.h>

using namespace std;

/*  Better SOlution
    
    int longestConSeq(vector<int> &arr){
    int n = arr.size();

    if(n==0){
        return 0;
    }

    sort(arr.begin(),arr.end());

    int longest = 1 , currCount =0, lastSmaller = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] - 1 == lastSmaller){
            lastSmaller = arr[i];
            currCount++;
        }
        else if(lastSmaller != arr[i]){
            currCount = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest,currCount);
    }
    return longest;
} */


int longestSuccessiveElements(vector<int> &arr){
    int n = arr.size();

    if(n==0){
        return 0;
    }

    unordered_set<int> st;

    int longest = 1;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int x = it;
            int count = 1;

            while(st.find(x+1) != st.end()){
                x = x+1;
                count++;
            }
            longest = max(longest,count);
        }
    }

    return longest;

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

    int longest = longestSuccessiveElements(arr);

    cout << "The longest Consecutive elements number in the array is :- " << longest;

    


}