#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;

    // vector<int> v(n); // declare
    // cout << v.size() << endl; // 0

    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << " ";
    // }
   

    vector<int> v;
    // cout << "isempty: " << v.empty() << endl;

    // cout << "Size: " << v.size() << endl; // 0
    // cout << "Capacity: " << v.capacity() << endl; // 0
    v.push_back(100);
    // cout << "Size: " << v.size() << endl; // 1
    // cout << "Capacity: " << v.capacity() << endl; // 1
    v.push_back(-20);
    // cout << "Size: " << v.size() << endl; // 2
    // cout << "Capacity: " << v.capacity() << endl; // 2
    v.push_back(30);
    // cout << "Size: " << v.size() << endl; // 3
    // cout << "Capacity: " << v.capacity() << endl; // 4
    v.push_back(-40);
    // cout << "Size: " << v.size() << endl; // 4
    // cout << "Capacity: " << v.capacity() << endl; // 4
    v.push_back(50);
    // cout << "Size: " << v.size() << endl; // 5
    // cout << "Capacity: " << v.capacity() << endl; // 8

    // v.pop_back();
    // v.pop_back();

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;
    cout << "isempty: " << v.empty() << endl; // 0
    
    // v.clear();
    // cout << "isempty: " << v.empty() << endl; // 1

    cout << "Begin: " << *v.begin() << endl;
    cout << "End: " << *v.end() << endl;

    auto it = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());

    cout << "Max: " << *it << endl;
    cout << "Min: " << *it2 << endl;

    sort(v.begin(), v.end()); // O(nlogn) = ascending
    sort(v.begin(), v.end(), greater<int>()); // O(nlogn) = descending
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    cout << endl; 

    reverse(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    cout << endl; 

    v.insert(v.begin()+1, 900);
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    cout << endl;
    
    v.erase(v.begin()+2);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    // range based for loop
    for(int x : v){
        cout << x << endl;
    }

    
    
    return 0;
}