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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> myNumbers = {10, 20, 30, 40, 50};
    int target = 30;

    int result = sol.search(myNumbers, target);

    if (result != -1) cout << "Element found at index: " << result << endl;
    else cout << "Element not found." << endl;
    
    return 0;
}

// TC: O(n)
// Aux. Space: O(1)