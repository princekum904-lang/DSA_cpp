#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveNoOfOnes(vector<int> &arr){
    int n = arr.size();

    int max =0, count =0;

    for(int i=0; i<n ; i++){
        if(arr[i] == 1){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 0;
        }
    }

    return max;
}

int main(){
    int n;
    cout << "Enter the size of the Array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array :- ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    int ans = maxConsecutiveNoOfOnes(arr);

    cout << "The Maximum consecutive number of 1's is :- " << ans;


}