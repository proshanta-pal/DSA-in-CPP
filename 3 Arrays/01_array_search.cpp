#include <iostream>
#include <vector>
using namespace std;

/*
Problem Link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
*/

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int sz = arr.size();
        for(int i = 0; i < sz; i++){
            if(x == arr[i]) return i;
        }
        return -1;
        
    }
};

// TC: O(n)
// Aux. Space: O(1)