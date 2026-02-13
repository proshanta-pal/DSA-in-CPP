#include <iostream>
using namespace std;

// Check if a given number is armstrong or not
bool isArmstrong(int n){
    int copy = n, sum = 0;

    while(n > 0){
        int lastdigit = n % 10;
        sum += (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }

    return sum == copy;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 371;

    if(isArmstrong(n)) cout << "Armstrong" << endl;
    else cout << "Not Armstrong" << endl;
    
    return 0;
}

// TC: O(log10(N))
// SC: O(1)