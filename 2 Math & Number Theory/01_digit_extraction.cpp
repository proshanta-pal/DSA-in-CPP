#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Extract digit from a number
vector<int> extractDigit(int n) {
    vector<int> v;  
    while(n > 0){ // n != 0
        int lastDigit = n % 10;  
        v.push_back(lastDigit); 
        n = n / 10; 
    }
    reverse(v.begin(), v.end());  
    return v; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 7789;
    vector<int> digits = extractDigit(n);
    for(int x : digits) cout << x << " ";

    return 0;
}

// TC: O(log10(N))
// SC: O(log10(N))