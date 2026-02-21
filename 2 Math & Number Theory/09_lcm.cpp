#include <bits/stdc++.h>
using namespace std;

int gcdOptimal(int a, int b){
    while(a > 0 && b > 0){
        if(a > b) a = a%b;
        else b = b%a;
    }
    if(a == 0) return b;
    return a;
}

int lcm(int a, int b){
    return (a * b) / gcdOptimal(a, b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 20, b = 28;
    cout << lcm(a, b) << endl;
    
    return 0;
}