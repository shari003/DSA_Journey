#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

void revArr(vector<int> &arr, int s, int e){
    while(s < e){
        swap(arr[s++], arr[e--]);
    }
}

int main(){

    // Q. largest element in an array.
    // vector<int> arr {2,5,1,3,0};
    // int maxi = INT_MIN;
    // for(auto i : arr){
    //     maxi = max(maxi, i);
    // }
    // cout << maxi << endl;

    // Q. second largest element in an array.
    // vector<int> arr {2,5,1,3,0};
    // if(arr.size() < 2) cout << -1 << endl;

    // int small = INT_MAX;
    // int second_small = INT_MAX;

    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] < small){
    //         second_small = small;
    //         small = arr[i];
    //     } else if(arr[i] < second_small && arr[i] != small){
    //         second_small = arr[i];
    //     }
    // }

    // cout << second_small << endl;

    // Q. Check if array is sorted.
    // vector<int> arr {2,5,1,3,0};
    // for(int i = 1; i < arr.size(); i++){
    //     if(arr[i-1] > arr[i]) {
    //         cout << "Not sorted !" << endl;
    //         break;
    //     }
    // }
    // cout << "Sorted !" << endl;

    // Q. remove duplicates from sorted array.
    // vector<int> arr {1,1,2,2,2,3,3};
    
    // int i = 0;
    // for(int j = 1; j < arr.size(); j++){
    //     if(arr[i] != arr[j]){
    //         i = i+1;
    //         arr[i] = arr[j];
    //     }
    // }

    // for(int k = 0 ; k < i+1; k++){
    //     cout << arr[k] << " "; 
    // }

    // Q. left rotate by 1.
    // vector <int> arr {1,2,3,4,5};
    // int temp = arr[0];
    // for(int i = 1; i < arr.size(); i++){
    //     arr[i-1] = arr[i];
    // }
    // arr[arr.size() - 1] = temp;
    // printVector(arr);

    // Q. left rotate by D places.
    // vector <int> arr {1,2,3,4,5};
    // int d = 3;
    // revArr(arr, 0, d-1);
    // revArr(arr, d, arr.size()-1);
    // revArr(arr, 0, arr.size() - 1);
    // printVector(arr);

    // Q. move zeroes to end, while mantaining the order.
    // vector<int> arr {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    // int j = -1;
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] == 0){
    //         j = i;
    //         break;
    //     }
    // }
    // if(j == -1) cout << "No Zero in array";
    // for(int i = j+1; i < arr.size(); i++){
    //     if(arr[i] != 0){
    //         swap(arr[i], arr[j]);
    //         j++;
    //     }
    // }
    // printVector(arr);

    // Q. find union of an array.
    // vector<int> arr1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vector<int> arr2 {2, 3, 4, 4, 5, 11, 12}; 
    // vector<int> Union;
    // int n = arr1.size();
    // int m = arr2.size();
    // int i = 0, j = 0;
    // while(i < n && j < m){
    //     if(arr1[i] <= arr2[j]){
    //         if(Union.size() == 0 || Union.back() != arr1[i]){
    //             Union.push_back(arr1[i++]);
    //         } 
    //     } else {
    //         if(Union.size() == 0 || Union.back() != arr2[j]){
    //             Union.push_back(arr2[j++]);
    //         } 
    //     }
    // }
    // while(i < n){
    //     if(Union.back() != arr1[i]){
    //         Union.push_back(arr1[i++]);
    //     } 
    // }
    // while(j < m){
    //     if(Union.back() != arr2[j]){
    //             Union.push_back(arr2[j++]);
    //     } 
    // }
    // printVector(Union);

    // Q. find the missing number.
    // vector<int>arr {1, 2, 4, 5};
    // int n = 5;
    // int xor1 = 0, xor2 = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     xor1 = xor1 ^ arr[i];
    //     xor2 = xor2 ^ (i+1);
    // }
    // xor2 = xor2 ^ n;
    // cout << (xor1 ^ xor2) << endl;


    // Q. find max cons. 1s
    // vector<int> arr {1, 1, 0, 1, 1, 1};
    // int cnt = 0, maxi = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] == 1){
    //         cnt++;
    //         maxi = max(maxi, cnt);
    //     } else {
    //         cnt = 0;
    //     }
    // }
    // cout << maxi << endl;

    // Q. longest subarray with sum K.
    // vector<int> arr {1, 2, 1, 0, 1};
    // int k = 4;
    // int i = 0, j = 0, sum = arr[0], maxLen = 0;
    // while(j < arr.size()){
    //     while(i <= j && sum > k){
    //         sum -= arr[i];
    //         i++;
    //     }
    //     if(sum == k){
    //         maxLen = max(maxLen, j-i+1);
    //     }
    //     j++;
    //     if(j < arr.size()) {
    //         sum += arr[j];
    //     }
    // }
    // cout << maxLen << endl;

    return 0;
}