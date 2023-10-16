#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector<int> arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    // Q. Two Sum
    // vector<int> arr {2,6,5,8,11};
    // int target = 14;
    // sort(arr.begin(), arr.end());
    // int i = 0, j = arr.size() - 1;
    // while(i < j){
    //     int s = arr[i] + arr[j];
    //     if(s == target){
    //         cout << i << " " << j << endl;
    //         break;
    //     } else if(s > target){
    //         j--;
    //     } else {
    //         i++;
    //     }
    // }

    // Q. Sort 0, 1, 2.
    // vector<int> arr {0, 2, 1, 2, 0, 1};
    // int start = 0, i = 0, e = arr.size() - 1;
    // while(i <= e){
    //     if(arr[i] == 0){
    //         swap(arr[start++], arr[i++]);
    //     } else if(arr[i] == 1){
    //         i++;
    //     } else {
    //         swap(arr[i], arr[e]);
    //         e--;
    //     }
    // }
    // printVector(arr);

    // Q. Majority Element (>n/2)
    // vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    // int cnt = 0, element;
    // for(int i = 0; i < arr.size(); i++){
    //     if(cnt == 0){
    //         element = arr[i];
    //     } else if(element == arr[i]){
    //         cnt++;
    //     } else {
    //         cnt--;
    //     }
    // }
    // cnt = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] == element) cnt++;
    // }
    // if(cnt > arr.size()/2){
    //     cout << element << endl;
    // } else {
    //     cout << "No" << endl;
    // }

    // Q. Kadane's Algorithm
    // int sum=0, maxi = 0;
    // for(int i = 0; i < size; i++){
    //     sum += arr[i];
    //     if(sum > maxi){
    //         maxi = sum;
    //     }
    //     if(sum < 0){
    //         sum = 0;
    //     }
    // }

    // Q. Stock Buy and Sell
    // vector<int> arr = {7,1,5,3,6,4};
    // int maxProfit = 0, minPrice = INT_MAX;
    // for(int i = 0; i < arr.size(); i++){
    //     minPrice = min(minPrice, arr[i]);
    //     maxProfit = max(maxProfit, arr[i]-minPrice);
    // }
    // cout << maxProfit << endl;

    // Q. Rearrange elements by Sign while mantaining the ORDER.
    // vector<int> arr {1, 2, -3, -1, -2, 3};
    // vector<int> pos, neg;
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] > 0){
    //         pos.push_back(arr[i]);
    //     } else {
    //         neg.push_back(arr[i]);
    //     }
    // }
    // for(int i = 0; i < min(pos.size(), neg.size()); i++){
    //     arr[2*i] = pos[i];
    //     arr[2*i+1] = neg[i];
    // }

    // if(neg.size() < pos.size()){
    //     int index = neg.size()*2;
    //     for(int i = neg.size(); i < pos.size(); i++){
    //         arr[index] = pos[i];
    //         index++;
    //     }
    // } else {
    //     int index = pos.size()*2;
    //     for(int i = pos.size(); i < neg.size(); i++){
    //         arr[index++] = neg[i];
    //     }
    // }
    // printVector(arr);

    // Q. Next Permutation
    // vector<int>arr {2, 1, 5, 4, 3, 0, 0};
    // int index = -1;
    // for(int i = arr.size()-2; i>=0; i--){
    //     if(arr[i] < arr[i+1]){
    //         index = i;
    //         break;
    //     }
    // }
    // if(index == -1){
    //     reverse(arr.begin(), arr.end());
    // }
    // for(int i = arr.size()-1; i >= index; i--){
    //     if(arr[i] > arr[index]){
    //         swap(arr[i], arr[index]);
    //         break;
    //     }
    // }
    // reverse(arr.begin()+index+1, arr.end());
    // printVector(arr);

    // Q. Leaders in an Array.
    // vector<int> arr {10, 22, 12, 3, 0, 6};
    // vector<int> ans;
    // ans.push_back(arr.back());
    // int curr_leader = arr[arr.size()-1];

    // for(int i = arr.size()-2; i >= 0; i--){
    //     if(arr[i] > curr_leader){
    //         curr_leader = arr[i];
    //         ans.push_back(curr_leader);
    //     }
    // }
    // printVector(ans);

    // Q. Rotate Matrix 90 deg CLOCKWISE
    // vector < vector < int >> arr  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // //transpose
    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = 0; j < i; j++){
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    // for(int i = 0; i < arr.size(); i++){
    //     reverse(arr[i].begin(), arr[i].end());
    // }

    return 0;
}