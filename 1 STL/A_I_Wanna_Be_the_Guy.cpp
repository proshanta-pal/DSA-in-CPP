#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q;
    cin >> n;
    cin >> p;

    set<int> s;

    while(p--){
        int a;
        cin >> a;
        s.insert(a);
    } // O(nlogn)

    cin >> q;

    while(q--){
        int a;
        cin >> a;
        s.insert(a);
    } // O(nlogn)

    if(s.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    
    return 0;
}

// TC: O(nlogn)