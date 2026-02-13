#include <iostream>
using namespace std;

// Reverse a given number
int revNum(int n){
    int revN = 0;
    while(n > 0){ 
        int lastdigit = n % 10;
        n = n / 10;
        revN = (revN * 10) + lastdigit;
    }
    return revN;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 12345;
    int rev = revNum(n);
    cout << rev << endl;
    return 0;
}

// TC: O(log10(N))
// SC: O(1)