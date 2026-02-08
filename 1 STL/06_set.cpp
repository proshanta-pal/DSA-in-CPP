#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s; // sorted and unique

    
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

    // range based for loop
    for(int x : s2){
        cout << x << endl;
    }

    cout << "--- unordered set ---" << endl;
    unordered_set<int> st; // not sorted but unique
    st.insert(1000);
    st.insert(200);
    st.insert(100);
    st.insert(100);
    st.insert(10);
    st.insert(20000);

    for(int i : st){
        cout << i << endl;
    }
    
    cout << "After erase: " << endl;
    auto it2 = st.find(200);
    st.erase(it2);
    
    for(int i : st){
        cout << i << endl;
    }

    // multiset
    cout << "--- Multiset ---" << endl;
    multiset<string> ms; // sorted, allow duplicate values (not unique)

    // sorted = lexicographically 
    ms.insert("abc");
    ms.insert("def");
    ms.insert("abc");
    ms.insert("abc");

    for(string x : ms){
        cout << x << endl;
    }
    
    cout << "After erase: " << endl;

    // auto it3 = ms.find("abc");
    // ms.erase(it3); // O(logn)

    ms.erase("abc");

    for(string x : ms){
        cout << x << endl;
    }

    return 0;
}