#include <iostream>
#include <vector>
using namespace std;

/*
Problem Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
Problem Link: https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278
*/

class Solution {
  public:
    // Brute: TC: O(n), SC: O(n) as using a temporary array
    void leftRotateBrute(vector<int> &arr) {
        int n = arr.size();
        if (n <= 1) return; // edge case
        
        int temp[n];
        for(int i = 1; i < n; i++){
            temp[i-1] = arr[i];
        }

        temp[n-1] = arr[0];
    }

    // Optimal: TC: O(n), SC: O(1) 
    void leftRotateOptimal(vector<int> &arr){
        int n = arr.size();
        if(n <= 1) return; // edge case

        int temp = arr[0];
        for(int i = 1; i < n; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }

    // BONUS
    // Optimal: TC: O(n), SC: O(1)
    void rightRotateOptimal(vector<int> &arr){
        int n = arr.size();
        if (n <= 1) return; // edge case

        int temp = arr[n-1];
        for(int i = n-1; i > 0; i--){
            arr[i] = arr[i-1];
        }

        arr[0] = temp;
    }
};