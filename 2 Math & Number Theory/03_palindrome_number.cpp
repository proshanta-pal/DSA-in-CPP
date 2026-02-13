#include <iostream>
using namespace std;

int revNum(int n){
    int revN = 0;
    while(n > 0){
        int lastdigit = n % 10;
        n = n / 10;
        revN = (revN * 10) + lastdigit;
    }
    return revN;
}

// Check if a number is Palindrome or not
bool isPalindrome(int n){
    if(n < 0) return false;
    int rev = revNum(n);
    return n == rev;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 12021;
    if(isPalindrome(n)) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    
    return 0;
}

// TC: O(log10(N))
// SC: O(1)