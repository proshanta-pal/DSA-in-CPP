#include <iostream>
#include <vector>
using namespace std;

// Print all the divisors of a number

// Brute: TC: O(n), SC: O(1) (aux)
vector<int> divisorsBrute(int n){
    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) v.push_back(i);
    }

    return v;
}

// Optimal: TC: O(sqrt(n)), SC: O(1) (aux)
vector<int> divisorsOptimal(int n){
    vector<int> v;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(n / i != i) v.push_back(n / i);
        }
    }

    return v;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 36;
    // vector<int> divisors = divisorsBrute(n);
    vector<int> divisors = divisorsOptimal(n);
    for(int x : divisors) cout << x << " ";
    
    return 0;
}

