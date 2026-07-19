#include<bits/stdc++.h>

using namespace std;

vector<int> printSpiralMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> ans;

    int left =0 , right = m-1 , top =0, bottom = n-1;

    while(left <= right && top <= bottom){

        //right
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        if(top<=bottom){ // in case of single line array
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
    

}

int main(){
    int rows , cols;
    cout << "Enter the number of rows and columns in the matrix respectively :- ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows , vector<int> (cols));

    cout << "Enter the elements in the matrix :- \n\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans;

    ans = printSpiralMatrix(matrix);

    cout << "The Spiral Matrix is :- \n";

    for(int i=0;i<rows*cols;i++){
        cout << ans[i] << " ";
    }


}