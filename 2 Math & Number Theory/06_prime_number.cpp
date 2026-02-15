#include <bits/stdc++.h>
using namespace std;

// Check if a number is prime or not
// Brute: TC: O(n), SC: O(1)
bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

// Optimal: TC: O(sqrt(n)), TC: O(1)
bool prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 17;
    if(isPrime(n)) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;

    if(prime(n)) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}