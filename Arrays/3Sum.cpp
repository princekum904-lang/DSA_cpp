// arr[i] + arr[j] + arr[k] = 0 , i!=j!=k

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int> &arr){

    int n = arr.size();

    sort(arr.begin(),arr.end());

    vector<vector<int>> result;

    for(int i=0;i<n;i++){

        if(arr[i] > 0)
            break;
        
        if(i > 0 && arr[i] == arr[i-1])
            continue;

        int j = i+1;
        int k = n-1;

        while(j<k){

            int sum = arr[i] + arr[j] + arr[k];

            if(sum == 0){
                vector<int> temp = {arr[i] , arr[j] , arr[k]};
                result.push_back(temp);
                j++;
                k--;

                while(j<k && arr[j] == arr[j-1]){
                    j++;
                }
                while(j<k && arr[k] == arr[k+1]){
                    k--;
                }
            }
            else if(sum < 0){
                j++;
            }
            else{
                k--;
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

    vector<vector<int>> ans = threeSum(arr);

    // Print out your unique triplets
    cout << "\nThe unique triplets that sum to 0 are:\n";
    for(auto triplet : ans) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }


}