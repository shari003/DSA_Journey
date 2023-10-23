#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key){
    while(s < e){
        int mid = s+(e-s)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    // Q. Peak Element in an array (single peak).
    // vector<int> arr = {0,10,5,2};
    // int s = 0, e = arr.size()-1;
    // while(s < e){
    //     int mid = s+(e-s)/2;
    //     if(arr[mid] < arr[mid+1]){
    //         s = mid + 1;
    //     } else {
    //         e = mid;
    //     }
    // }
    // cout << s << endl;

    // Q. Search Element in a Rotated Sorted Array - I
    // vector<int> arr {7, 8, 9, 1, 2, 3, 4, 5, 6};
    // int k = 1;
    // // Q. Find Pivot of the array
    // int s = 0, e = arr.size() - 1;
    // while(s < e){
    //     int mid = s+(e-s)/2;
    //     if(arr[mid] >= arr[0]){
    //         s = mid + 1;
    //     } else {
    //         e = mid;
    //     }
    // }
    // int pivot = s;
    // s = 0, e = arr.size()-1;
    // if(k >= arr[pivot] && k <= arr[arr.size()-1]){
    //     cout << binarySearch(arr, pivot, arr.size()-1, k);
    // } else {
    //     cout << binarySearch(arr, 0, pivot-1, k);
    // }

    // Q. Search Element in Rotated Sorted Array - II
    // The array may contain duplicate values, answer in yes/no.
    // The above solution will work, instead of returning the index of key, return a boolean value.

    // Q. Find out how many times the array has been rotated.
    // vector<int> arr = {3,4,5,1,2};
    // int s = 0, e = arr.size() - 1;
    // while(s < e){
    //     int mid = s+(e-s)/2;
    //     if(arr[mid] >= arr[0]){
    //         s = mid + 1;
    //     } else {
    //         e = mid;
    //     }
    // }
    // int pivot = s;
    // cout << pivot << endl;

    // Q. Search Single Element in an Array.
    // vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    // if(arr.size() == 1 || arr[0] != arr[1]) cout << arr[0] << endl;
    // if(arr[arr.size()-1] != arr[arr.size()-2]) cout << arr[arr.size()-1] << endl;
    // int s = 1, e =arr.size()-2;
    // while(s<=e){
    //     int mid = (s+e)/2;
    //     if((mid%2 == 0 && arr[mid] == arr[mid+1]) || mid%2 == 1 && arr[mid] == arr[mid-1]){
    //         s = mid + 1;
    //     } else {
    //         e = mid - 1;
    //     }
    // }
    // cout << arr[s] << endl;


    return 0;
}