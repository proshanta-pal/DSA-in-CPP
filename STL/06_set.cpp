#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;

    // unordered_set<int> st;
    // multiset<int> stt;

    s.insert(100); // {100}
    s.insert(200); // {100, 200}
    s.insert(-100); // {-100, 100, 200}

    s.insert(100); // {-100, 100, 200}

    // cout << s.count(100) << endl; // 1
    // cout << s.count(1000) << endl; // 0

    set<int> s2 = {1, 2, 3, 4, 5};

    auto it = s2.find(3);
    s2.erase(it);

    // cout << *it << endl;

    // output
    for(int x : s2){
        cout << x << endl;
    }

    return 0;
}