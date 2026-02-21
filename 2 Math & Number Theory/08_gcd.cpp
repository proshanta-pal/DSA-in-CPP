#include <bits/stdc++.h>
using namespace std;

// Find GCD/HCF of two numbers
// Brute: TC: O(min(a, b)), SC: O(1)
int gcdBrute(int a, int b){
    int gcd = 1;
    for(int i = 1; i <= min(a, b); i++){
        if(a == 0) return b;
        if(b == 0) return a;
        if(a == b) return a;
        if(a%i == 0 && b%i == 0) gcd = i;
    }
    return gcd;
}

// Optimal(Euclidian Algorithm): TC: O(log(min(a, b))), SC: O(1)
int gcdOptimal(int a, int b){
    while(a > 0 && b > 0){
        if(a > b) a = a%b;
        else b = b%a;
    }
    if(a == 0) return b;
    return a;
}

// Recursive Approach
int gcdRec(int a, int b){
    if(b == 0) return a;
    else gcdRec(b, a%b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 20, b = 28;
    cout << gcdBrute(a, b) << endl;
    cout << gcdOptimal(a, b) << endl;
    cout << gcdRec(a, b) << endl;
    
    return 0;
}