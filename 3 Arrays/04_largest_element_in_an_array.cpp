#include <iostream>
#include <vector>
using namespace std;

/*
Problem Link: https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
*/

class Solution{
    public:
        // Brute: TC: O(nlogn), SC: O(1)
        int largestElementBrute(vector<int> &arr, int n){
            sort(arr.begin(), arr.end());
            return arr[arr.size() - 1];
        }

        // Optimal: TC: O(n), SC: O(1)
        int largestElementOptimal(vector<int> &arr, int n) {
            int mx = INT_MIN;
            for(int i : arr){
                if(i > mx) mx = i;
            }
        
            return mx;
        }
};
