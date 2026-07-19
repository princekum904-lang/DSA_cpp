#include<bits/stdc++.h>

using namespace std;

vector<int> findNextPermutation(vector<int> &num){
    int n = num.size();
    int ind = -1;
    for(int i = n-2;i>=0;i--){
        if(num[i] < num[i+1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){
        reverse(num.begin(),num.end());
        return num;
    }

    for(int i = n-1; i>ind;i--){
        if(num[i] > num[ind]){
            swap(num[ind],num[i]);
            break;
        }
    }

    reverse(num.begin()+ind+1 , num.end());

    return num;
}


int main(){
    

    cout << "Enter the number :- ";
    int n;
    cin >> n;

    vector<int> digits;
    
    int temp = n;
    if (temp == 0) {
        digits.push_back(0);
    } else {
        while (temp > 0) {
            digits.push_back(temp % 10); // Extract the last digit
            temp /= 10;                  // Strip the last digit away
        }
        // Since we extracted right-to-left, flip the vector
        reverse(digits.begin(), digits.end());
    }

    vector<int> nextPerm(digits.size());
    nextPerm = findNextPermutation(digits);

    cout << "The Next Permutation of " << n << " is :- ";

    for(auto it : nextPerm){
        cout << it;
    }



}