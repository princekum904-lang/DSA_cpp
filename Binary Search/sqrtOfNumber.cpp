// square root should be <= n

#include<bits/stdc++.h>

using namespace std;

int findSqRoot(int n){
    int low =0,high =n;
    long long mid;
    int ans;

    while(low<=high){
        mid = low + (high -low)/2;

        if(mid*mid <= n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number to find square root of :- ";
    cin >> n;

    int ans = findSqRoot(n);

    cout << "The Answer is :- " << ans;


}