#include <iostream>
using namespace std;

// print 1 to n
void print1ton(int n){
    if(n == 0) return; // base case
    print1ton(n-1);
    cout << n << " ";
}

// print n to 1
void printnto1(int n){
    if(n == 0) return; // base case
    cout << n << " ";
    printnto1(n-1);
}

int main(){
    int n = 5;
    print1ton(n);
    cout << endl;
    printnto1(n);
    return 0;
}

// TC: O(n)
// SC: O(n)