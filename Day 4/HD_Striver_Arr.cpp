#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    // Q. Pascal Triangle
    // VAR - 1
    // int n = 6, r = 3;
    // int res = 1;
    // for(int i = 0; i < r; i++){
    //     res = res*(n-i);
    //     res = res/(i+1);
    // }
    // cout << res << endl;
    // VAR - 2  => Nth row
    // int n = 6;
    // int ans = 1;
    // cout << ans << " ";
    // for(int i = 1; i < n; i++){
    //     ans = ans*(n-i);
    //     ans = ans/i;
    //     cout << ans << " ";
    // }
    // cout << endl;

    // Q. Majority Element (n/3)
    // vector<int> arr = {11, 33, 33, 11, 33, 11};
    // int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN;
    // for(int i = 0; i < arr.size(); i++){
    //     if(cnt1 == 0 && ele2 != arr[i]){
    //         cnt1 = 1;
    //         ele1 = arr[i];
    //     } else if(cnt2 == 0 && ele1 != arr[i]){
    //         cnt2 = 1;
    //         ele2 = arr[i];
    //     } else if(ele1 == arr[i]){
    //         cnt1++;
    //     } else if(ele2 == arr[i]){
    //         cnt2++;
    //     } else {
    //         cnt1--;
    //         cnt2--;
    //     }
    // }
    // cnt1 = 0, cnt2 = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] == ele1) cnt1++;
    //     if(arr[i] == ele2) cnt2++;
    //     if(cnt1 > arr.size()/3){
    //         cout << ele1 << " ";
    //     }
    //     if(cnt2 > arr.size()/3){
    //         cout << ele2 << " ";
    //     }
    // }

    // Q. 3 - Sum
    // vector<int> arr = { -1, 0, 1, 2, -1, -4};
    // sort(arr.begin(), arr.end());
    // int n = arr.size();
    // for(int i = 0; i < n; i++){
    //     if(i > 0 && arr[i] == arr[i-1]) continue;        
    //     int j = i+1;
    //     int k = n-1;
    //     while(j < k){
    //         int s = arr[i] + arr[j] + arr[k];
    //         if(s == 0){
    //             cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    //             j++;
    //             k--;
    //             while(j < k && arr[j] == arr[j-1]) j++;
    //             while(j < k && arr[k] == arr[k+1]) k--;
    //         } else if(s > 0){
    //             k--;
    //         } else {
    //             j++;
    //         }
    //     }
    // }

    // Q. 4 - Sum
    // vector<int> arr = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    // int target = 9;
    // sort(arr.begin(), arr.end());
    // int n = arr.size();
    // for(int i = 0; i < n; i++){
    //     if(i > 0 && arr[i-1] == arr[i]) continue;
    //     for(int j = i+1; j < n; j++){
    //         if(j > i+1 && arr[j-1] == arr[j]) continue;
    //         int k = j+1, l = n-1;
    //         while(k < l){
    //             int s = arr[i] + arr[j] + arr[k] + arr[l];
    //             if(s == target){
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << endl;
    //                 k++;
    //                 l--;
    //                 while(k < l && arr[k] == arr[k-1]) k++;
    //                 while(k < l && arr[l] == arr[l-1]) l--;
    //             } else if(s > target){
    //                 l--;
    //             } else {
    //                 k++;
    //             }
    //         }
    //     }
    // }

    // Q. Length of the longest subarray with zero Sum
    // map<int, int> mpp;
    // vector<int> arr {1, 2, -2, 4, -4};
    // int sum = 0, maxi = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     sum += arr[i];
    //     if(sum == 0){
    //         maxi = i+1;
    //     } else {
    //         if(mpp.find(sum) != mpp.end()){
    //             maxi = max(maxi, i - mpp[sum]);
    //         } else {
    //             mpp[sum] = i;
    //         }
    //     }
    // }
    // cout << maxi << " ";




    return 0;
}