#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // map<pair<string, string>, bool> mp;
    set<pair<string, string>> s;

    while(n--){
        string a, b;
        cin >> a >> b;

        // mp[{a, b}] = true;
        s.insert({a, b});
    }
    // cout << mp.size() << endl;
    cout << s.size() << endl;

    return 0;
}