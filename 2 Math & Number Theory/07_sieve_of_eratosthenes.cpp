#include <bits/stdc++.h>
using namespace std;

// Check if a number is prime or not between a range
// Brute: TC: O(n*sqrt(n)), SC: O(1)
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Optimal: TC: O(nloglogn), SC: O(n)
vector<int> seiveOfEratosthenes(int n){
    vector<int> prime(n+1, true);
    vector<int> ans;
    for(int i = 2; i < n; i++){
        if(prime[i]){
            ans.push_back(i);
            for(int j = i*2; j < n; j = j+i) prime[j] = false;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 50;
    for(int i = 2; i <= n; i++){
        if(isPrime(i)) cout << i << " ";
    }
    cout << endl;

    vector<int> soe = seiveOfEratosthenes(n);

    for(int x : soe) cout << x << " ";

    return 0;
}