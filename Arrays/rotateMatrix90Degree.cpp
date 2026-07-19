#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns (number of rows and columns are equal):- ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\n\n\n";
    cout << "The Rotated Matrix :- \n\n\n\n";

    rotateMatrix(matrix);


    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}