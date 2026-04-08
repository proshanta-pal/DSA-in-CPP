#include <iostream>
using namespace std;

// fibonacchi sequence: 0 1 1 2 3 5 8 13 21 34 55 89

int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n = 3;
    cout << fib(n) << endl;
    return 0;
}