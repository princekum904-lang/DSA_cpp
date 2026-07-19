#include<bits/stdc++.h>
using namespace std;

void allPermutations(vector<int> &digits, set<int> &ans, vector<bool> &used, int currNum, int count){

    if(count == digits.size()){
        ans.insert(currNum);
        return;
    }

    for(int i =0; i<digits.size();i++){
        if(!used[i]){
            
            used[i] = true;

            allPermutations(digits , ans , used , currNum * 10 + digits[i] , count+1);
            
            used[i] = false;
        }
    }
}

int main(){
    int n;
    cout << "Enter the Number :- ";
    cin >> n;

    int temp = n;

    vector<int> digits;

    while(temp > 0){
        digits.push_back(temp%10);
        temp /= 10;
    }

    reverse(digits.begin(),digits.end());
    //sort(digits.begin(),digits.end());

    vector<bool> used(digits.size(), false);
    
    set<int> ans;

    allPermutations(digits,ans,used,0,0);

    for(auto it:ans){
        cout << it << endl;
    }

}




/* STRING METHOD

#include <bits/stdc++.h>
using namespace std;

void generatePermutations(string &num, string current, vector<bool> &used) {
    // Base case
    if (current.length() == num.length()) {
        cout << current << endl;
        return;
    }

    // Try every digit
    for (int i = 0; i < num.length(); i++) {
        if (!used[i]) {
            used[i] = true;                           // Choose
            generatePermutations(num, current + num[i], used); // Explore
            used[i] = false;                          // Backtrack
        }
    }
}


/* IF THE INPUT HAS DUPLICATE DIGITS 

void generatePermutations(string &num, string current, vector<bool> &used) {
    if (current.length() == num.length()) {
        cout << current << endl;
        return;
    }

    unordered_set<char> taken;

    for (int i = 0; i < num.length(); i++) {
        if (!used[i] && !taken.count(num[i])) {
            taken.insert(num[i]);

            used[i] = true;
            generatePermutations(num, current + num[i], used);
            used[i] = false;
        }
    }
}


*\\

int main() {
    int n;
    cin >> n;

    string num = to_string(n);
    vector<bool> used(num.length(), false);

    generatePermutations(num, "", used);

    return 0;
}

*/