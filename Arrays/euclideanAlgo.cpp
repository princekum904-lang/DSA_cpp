#include<bits/stdc++.h>

using namespace std;

int findgcd(int n1, int n2){      // gcd() is also a built in function
    while(n1 != 0 && n2 != 0){
        if(n1>n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }

    if(n1 == 0){
        return n2;
    }
    if(n2 == 0){
        return n1;
    }
}

int main(){
    int n1 , n2 , hcf;
    cout << "Enter two numbers to find gcd of :- ";
    cin >> n1 >> n2;
    hcf = findgcd(n1,n2);

    cout << "The HCF of " << n1 << " and " << n2 << " is :- " << hcf;
}