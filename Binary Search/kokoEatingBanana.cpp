#include<bits/stdc++.h>

using namespace std;

int totalHour(vector<int> &piles, int hourly){
    int th = 0;

    for(int i=0;i<piles.size();i++){
        th += ceil((double)(piles[i])/hourly);  // better-  th += (piles[i] + hourly - 1) / hourly;
    }
    return th;
}

int minPerHour(vector<int> &piles, int hour){
    int n = piles.size();
    int maxi = *max_element(piles.begin(),piles.end());
    int low =1,high = maxi,mid;
    int ans = -1;

    while(low<=high){
        mid = low + (high-low)/2;

        int th = totalHour(piles,mid);

        if(th <= hour){
            ans = mid;
            high = mid - 1;
        }
        
        if(th > hour){
            low = mid + 1;
        }
    }
    return ans;

}

int main(){
    int n;
    cout << "Enter the no. of piles of bananas (size of array) :- ";
    cin >> n;

    vector<int> piles(n);

    cout << "Enter the number of bananas in each pile (elements in the array) :- ";

    for(int i=0;i<n;i++){
        cin >> piles[i];
    }

    cout << "Enter the hours within which the bananas is to be eaten :- ";
    int hour;
    cin >> hour;

    int ans = minPerHour(piles,hour);

    cout << "The required answer is :- " << ans;


}