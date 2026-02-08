#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq;
    dq.push_back(100);
    dq.push_back(200);
    dq.push_back(300);
    dq.pop_back();

    dq.push_front(5000);
    dq.pop_front();
    
    for(int i = 0;i < dq.size(); i++){
        cout << dq[i] << " ";
    }

    // back(), front(), begin(), end(), clear(), size(), insert(), erase() same as vector

    return 0;
}