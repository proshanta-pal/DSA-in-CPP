#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, string> p; // declare

    // p = {1, "abc"}; // initialize
    p = make_pair(1, "abcdef");
    cout << p.first << " " << p.second << endl;

    // copy a pair
    pair<int, string> p2 = p;
    cout << p2.first << " " << p2.second << endl;

    // input pair
    pair<int, string> p3;
    cin >> p3.first >> p3.second;
    cout << p3.first << " " << p3.second << endl;

    // array of pairs
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    pair<int, int> p_arr[3];

    // p_arr[0] = {1, 2};
    // p_arr[1] = {3, 4};
    // p_arr[2] = {5, 6};

    for(int i = 0; i < 3; i++){
        cin >> p_arr[i].first >> p_arr[i].second;
    }

    for(int i = 0; i < 3; i++){
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }

    return 0;
}