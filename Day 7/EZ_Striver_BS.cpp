#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Q. Binary Search
    // vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    // int target = 6;
    // int s = 0, e = arr.size()-1;
    // while(s <= e){
    //     int mid = s+(e-s)/2;
    //     if(arr[mid] == target){
    //         cout << "Index at : " << mid << endl;
    //         break;
    //     } else if(arr[mid] > target){
    //         e = mid - 1;
    //     } else {
    //         s = mid + 1;
    //     }
    // }

    // Q. First & Last occurrence in a sorted array
    // int key = 13;
    // vector <int> arr {3,4,13,13,13,20,40};
    // int firstOcc = -1, lastOcc = -1;
    // int s = 0, e = arr.size()-1;
    // while(s <= e){
    //     int mid = s+(e-s)/2;
    //     if(arr[mid] == key){
    //         firstOcc = mid;
    //         e = mid-1;
    //     } else if(arr[mid] > key){
    //         e = mid-1;
    //     } else {
    //         s = mid+1;
    //     }
    // }
    // s = 0, e = arr.size()-1;
    // while(s <= e){
    //     int mid = s+(e-s)/2;
    //     if(arr[mid] == key){
    //         lastOcc = mid;
    //         s = mid+1;
    //     } else if(arr[mid] > key){
    //         e = mid-1;
    //     } else {
    //         s = mid+1;
    //     }
    // }
    // cout << firstOcc <<" " << lastOcc << endl;

    // Q. Count Occurrences in Sorted Array.
    // cout << lastOcc - firstOcc + 1 << endl;
    

    return 0;
}