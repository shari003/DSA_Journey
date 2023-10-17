#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void printMat(vector<vector<int>> ans){
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
}

int main(){
    // Q. Set Matrix zeroes.
    // vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    // printMat(matrix);
    // int col0 = 1;
    // int n = matrix.size(), m = matrix[0].size();
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(matrix[i][j] == 0){
    //             matrix[i][0] = 0;
    //             if(j != 0){
    //                 matrix[0][j] = 0;
    //             } else {
    //                 col0 = 0;
    //             }
    //         }
    //     }
    // }
    // for(int i = 1; i < n; i++){
    //     for(int j = 1; j < m; j++){
    //         if(matrix[i][0] || matrix[0][j]){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    // if(matrix[0][0] == 0){
    //     for(int j = 0; j < m; j++){
    //         matrix[0][j] = 0;
    //     }
    // }
    // if(col0 == 0){
    //     for(int i=0; i < n; i++){
    //         matrix[i][0] = 0;
    //     }
    // }
    // cout << endl;
    // printMat(matrix);

    // Q. SPIRAL TRAVERSAL
    // vector<vector<int>> mat   {{1, 2, 3, 4},
    //                          {5, 6, 7, 8},
	//                          {9, 10, 11, 12},
	// 	                     {13, 14, 15, 16}};
    // vector<vector<int>> ans;
    // int n = mat.size(), m = mat[0].size();
    // int top = 0, bottom = n-1;
    // int left = 0, right = m-1;
    // printMat(mat);
    // cout << endl;
    // while(top <= bottom && left <= right){
    //     for(int i = left; i <= right; i++){
    //         cout << mat[top][i] << " ";
    //     }
    //     top++;
    //     for(int i = top; i <= bottom; i++){
    //         cout << mat[i][right] << " ";
    //     }
    //     right--;
    //     if(top <= bottom){
    //         for(int i = right; i >= left; i--){
    //             cout << mat[bottom][i] << " ";
    //         }
    //         bottom--;
    //     }
    //     if(left <= right){
    //         for(int i = bottom; i >= top; i--){
    //             cout << mat[i][left] << " ";
    //         }
    //         left++;
    //     }
    // }

    // Q. Count Subarray sum Equals K.
    // vector<int> arr = {3, 1, 2, 4};
    // int k = 6;
    // map<int,int>mpp;
    // mpp[0] = 1;
    // int preSum = 0, cnt = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     preSum += arr[i];
    //     int rem = preSum - k;
    //     cnt += mpp[rem];
    //     mpp[preSum] += 1;
    // }
    // cout << cnt << endl;

    return 0;
}