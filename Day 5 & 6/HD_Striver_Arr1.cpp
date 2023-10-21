#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printMat(vector<vector<int>> ans){
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
}

void printVector(vector<int> arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid + 1;
    int cnt = 0;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
            cnt += (mid - left + 1);
        }
    }
    while(left <= mid){
        temp.push_back(arr[left++]);
    }
    while(right <= high){
        temp.push_back(arr[right++]);
    }
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    if(low >= high) return cnt;
    int mid = (low + high)/2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

int main(){
    // Q. Count the number of subarrays with given xor K
    // vector<int> a = {4, 2, 2, 6, 4};
    // int k = 6;
    // int xr = 0;
    // map<int,int> mpp;
    // mpp[0] = 1;
    // int cnt = 0;
    // for(int i: a){
    //     xr = xr^i;
    //     int rem = xr^k;
    //     cnt += mpp[rem];
    //     mpp[xr]++;
    // }
    // cout << cnt << endl;

    // Q. Merge Overlapping Sub-intervals
    // vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    // vector<vector<int>> ans;
    // sort(arr.begin(), arr.end());
    // for(int i = 0; i < arr.size(); i++){
    //     if(ans.empty() || ans.back()[1] <= arr[i][0]){
    //         ans.push_back(arr[i]);
    //     } else {
    //         ans.back()[1] = max(ans.back()[1], arr[i][1]);
    //     }
    // }
    // printMat(ans);

    // Q. Merge two Sorted Arrays Without Extra Space
    // vector<int> arr1 {1, 4, 8, 10};
    // vector<int> arr2 = {2, 3, 9};
    // int n = arr1.size(), m = arr2.size();
    // int left = n-1, right = 0;
    // while(left >= 0 && right < m){
    //     if(arr1[left] > arr2[right]){
    //         swap(arr1[left--], arr2[right++]);
    //     } else {
    //         break;
    //     }
    // }
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());
    // printVector(arr1);
    // printVector(arr2);

    // Q. Find the repeating and missing numbers
    // vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    // int n = a.size();
    // int sn = (n*(n+1))/2;
    // int s2n = (n*(n+1)*(2*n+1))/6;
    // int s = 0, s2 = 0;
    // for(int i = 0; i < n; i++){
    //     s += a[i];
    //     s2 += a[i]*a[i];
    // }
    // int val1 = s - sn;
    // int val2 = s2 - s2n;
    // val2 = val2/val1;
    // int x = (val1+val2)/2;
    // int y = x - val1;
    // cout << x << " " << y << endl;

    // Q. Count inversions in an array
    // vector<int> arr = {5, 4, 3, 2, 1};
    // cout << mergeSort(arr, 0, arr.size()-1);

    // Q. Maximum Product Subarray in an Array
    // vector<int> arr = {1, 2, -3, 0, -4, -5};
    // int prod = 1;
    // int ans = INT_MIN;
    // for(int i: arr){
    //     prod *= i;
    //     ans = max(ans, prod);
    //     if(prod == 0){
    //         prod = 1;
    //     }
    // }
    // prod = 1;
    // for(int i = arr.size()-1; i >= 0; i--){
    //     prod *= arr[i];
    //     ans = max(ans, prod);
    //     if(prod == 0){
    //         prod = 1;
    //     }
    // }
    // cout << ans << endl;

    return 0;
}