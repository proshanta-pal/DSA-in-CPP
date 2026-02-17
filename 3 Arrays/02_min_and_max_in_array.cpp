#include <iostream>
#include <vector>
using namespace std;

/*
Problem Link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
*/

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        
        for(int i : arr){
            if(i > mx) mx = i;
            if(i < mn) mn = i;
        }
        
        return {mn, mx};
        
    }
};

// TC: O(n)
// Aux. Space: O(1)