#include<bits/stdc++.h>

using namespace std;

vector<int> getRow(int rowNo){

    vector<int> arr;

    int rowInd = rowNo - 1;
    long long ans = 1;
    arr.push_back(ans);
    for(int colInd =1; colInd<=rowInd; colInd++){
        ans = ans * (rowInd-colInd+1);
        ans = ans/colInd;
        arr.push_back(ans);
    }
    return arr;
}

vector<vector<int>> getTriangle(int rowNo){
    int rowInd = rowNo - 1;
    vector<vector<int>> pascalTriangle;
    vector<int> row;
    for(int i = 0 ; i<= rowInd; i++){
        row = getRow(i+1);
        pascalTriangle.push_back(row);
    }
    return pascalTriangle;
}

int main(){

    int rowNo;
    cout << "Enter the row no. upto which you want to print the pascal triangle :- ";
    cin >> rowNo;


    // FIX: Call the function and catch the result
    vector<vector<int>> pascalTriangle = getTriangle(rowNo);

    // FIX: Code to print out the result neatly
    cout << "\nPascal's Triangle:\n";
    for(int i = 0; i < pascalTriangle.size(); i++){
        // Optional spacing to visually center the pyramid shape
        for(int space = 0; space < rowNo - i - 1; space++) {
            cout << " ";
        }
        for(int j = 0; j < pascalTriangle[i].size(); j++){
            cout << pascalTriangle[i][j] << " ";
        }
        cout << "\n";
    }

}