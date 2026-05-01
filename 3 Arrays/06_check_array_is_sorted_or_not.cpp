#include <iostream>
#include <vector>
using namespace std;

/*
Problem Link: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
Problem Link: https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957
*/

class Solution {
  public:
    // Brute: TC: O(n^2), SC: O(1)
    bool isSortedBrute(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]) return false;
            }
        }
        return true;
    }

    // Optimal: TC: O(n), SC: O(1)
    bool isSortedOptimal(vector<int>& arr) {
        int n = arr.size();
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]) return false;
        }
        
        return true;
    }
};