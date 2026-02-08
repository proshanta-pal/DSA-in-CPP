#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;
    cout << "Empty: " << q.empty() << endl;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Size: " << q.size() << endl;

    q.pop();
    cout << "Size: " << q.size() << endl;

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // output
    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}