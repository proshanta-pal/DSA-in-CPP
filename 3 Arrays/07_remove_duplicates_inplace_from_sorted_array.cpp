#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
Problem Link: https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
Problem Link: https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307
Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
*/

class Solution {
  public:
    // Brute: TC: O(n), SC: O(n) as additional space used to store elements in set
    vector<int> removeDuplicatesBrute(vector<int> &arr) {
        unordered_set<int> s;
        vector<int> ans;
        
        for (int x : arr) {
            if (s.find(x) == s.end()) {
                s.insert(x);
                ans.push_back(x);
            }
        }
        return ans;
    }

    // Optimal: TC: O(n), SC: O(1)
    int removeDuplicatesOptimal(vector<int> &arr, int n) {
        if (arr.empty()) return 0;

        int i = 0;
        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i]) {
                arr[i+1] = arr[j];
                i++;
            }
        }
        return i + 1;
    }
};