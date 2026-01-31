#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, string> m;

    m[1] = "abc";
    m[2] = "def";
    m[4] = "er";
    m[1] = "elwrjke";
    m[100] = "ER";

    cout << m[1] << endl;
    cout << m[99] << endl;


    // auto it = m.begin();

    for(auto it = m.begin(); it != m.end(); it++){
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl;
    }

    cout << "-----" << endl;
    
    // m.erase(100); // O(logn)
    auto it = m.find(2);
    m.erase(it);
    
    m.clear(); 
    
    // range base for loop
    for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }
    
    cout << "--- Unordered map ---" << endl;
    // unordered map
    unordered_map<int, string> mp; // not sorted but unique
    mp[1] = "hello";
    mp[4] = "world";
    mp[2] = "c++";
    mp[2] = "python";

    for(auto x : mp){ 
        cout << x.first << " " << x.second << endl;
    }
    
    return 0;
}