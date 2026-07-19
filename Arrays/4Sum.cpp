// arr[i] + arr[j] + arr[k] + arr[l] = target

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target){

    int n = arr.size();

    sort(arr.begin(),arr.end());

    vector<vector<int>> result;

    for(int i =0;i<n-3;i++){

        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }

        for(int j = i+1; j<n-2; j++){

            if(j > i+1 && arr[j] == arr[j-1]){
                continue;
            }

            int k = j+1;
            int l = n-1;

            while(k<l){

                long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];

                if(sum == target){
                    result.push_back({arr[i] , arr[j] , arr[k] , arr[l]});
                    k++;
                    l--;

                    while(k<l && arr[k] == arr[k-1]){
                        k++;
                    }
                    while(k<l && arr[l] == arr[l+1]){
                        l--;
                    }

                }
                else if(sum < target){
                    k++;
                }
                else{
                    l--;
                }

            }

        }
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array :- ";

    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Enter the value of target for four some :- ";
    int target;
    cin >> target;

    vector<vector<int>> ans = fourSum(arr, target);

    // Print out your unique triplets
    cout << "\nThe unique triplets that sum to 0 are:\n";
    for(auto triplet : ans) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ", " << triplet[3] << "]\n";
    }


}