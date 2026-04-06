#include <iostream>
using namespace std;

void printName(int n){
    if(n == 0) return; // base case
    cout << "Proshanta" << endl;
    printName(n-1);

}

int main(){
    int n = 3;
    printName(n);
    return 0;
}

// TC: O(n), because function called n times
// SC: O(n), stack space