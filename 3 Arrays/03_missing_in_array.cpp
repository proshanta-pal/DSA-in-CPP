#include <iostream>
#include <vector>
using namespace std;

/*
Problem Link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
*/

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long sz = arr.size() + 1;
        
        long long sum = (sz * (sz + 1)) / 2;
        long long sum2 = 0;
        
        for(int x : arr){
            sum2 += x;
        }
        
        return sum-sum2;
        
    }
};

// TC: O(n)
// Aux. Space: O(1)