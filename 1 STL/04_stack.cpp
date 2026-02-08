#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> st;
    cout << "Empty: " << st.empty() << endl; // 1
    st.push(100);
    st.push(200);
    st.push(300);

    cout << "Empty: " << st.empty() << endl; // 1

    st.pop();
    cout << "Size: " << st.size() << endl; // 3

    st.pop();
    cout << "top: " << st.top() << endl;

    // output
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}