// Best time to buy and sell stocks

#include<bits/stdc++.h>

using namespace std;

int Stocks(vector<int> &arr){
    int n = arr.size();

    int mini = arr[0];
    int profit = 0;
    int maxProfit = 0;

    for(int i =1;i<n;i++){
        profit = arr[i] - mini;
        maxProfit = max(maxProfit, profit);
        mini = min(mini , arr[i]);
    }

    return maxProfit;
}


int main(){
    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " prices of stock in the array :- ";

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    int maxProfit = Stocks(arr);

    cout << "The Max Profit Will be :- " << maxProfit;

}