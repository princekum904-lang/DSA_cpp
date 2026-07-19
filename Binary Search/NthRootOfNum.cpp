#include<bits/stdc++.h>

using namespace std;

long long power(int x,int base,int index){
    long long ans = 1;
    for(int i=1;i<=index;i++){
        ans *= base;
        if(ans > x){
            break;
        }
    }
    return ans;
}

int nthRoot(int x,int n){
    int low =0,high =x;
    long long mid;
    int ans = -1;

    while(low<=high){
        mid = low + (high -low)/2;
        long long val = power(x,mid,n);
        if( val== x){
            return mid;
        }
        else if(val > x){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    return ans;
}

int main(){
    int x;
    cout << "Enter the number to find nth root of :- ";
    cin >> x;

    int n;
    cout << "Enter the value of n :- ";
    cin >> n;

    int ans = nthRoot(x,n);

    cout << "The nth root is :- " << ans; 
}