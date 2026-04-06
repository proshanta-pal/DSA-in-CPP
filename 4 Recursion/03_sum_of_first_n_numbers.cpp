#include <iostream>
using namespace std;

int sum_of_n_nums(int n){
    if(n == 0) return 0; // base case
    return n + sum_of_n_nums(n-1);
}

int main(){
    int n = 5;
    int result = sum_of_n_nums(n);
    cout << result << endl;
}

// TC: O(n)
// SC: O(n)