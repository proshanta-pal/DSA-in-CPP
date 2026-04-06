#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int main(){
    int n = 5;
    int f = factorial(n);
    cout << f << endl;
}

// TC: O(n)
// SC: O(n)