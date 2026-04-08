#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &arr, int l, int r){
    if(l >= r) return; // base case
    swap(arr[l], arr[r]);
    reverseArr(arr, l+1, r-1);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArr(arr, 0, arr.size()-1);
    for(int x : arr) cout << x << " ";
    return 0;
}

// TC: O(n)
// SC: O(n)