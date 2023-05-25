#include <bits/stdc++.h>
using namespace std;

string helpfulmaths(string str) {
    string ans = "";
    stack<char> st;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '+') {
            int a = str[i] - '0';
            q.push(a);
        }
    }
    while (!q.empty()) {
        ans += to_string(q.top());
        q.pop();
        if (!q.empty()) {
            ans += '+';
        }
    }
    return ans;
}

int main() {
    string str;
    cin>>str;
    cout << helpfulmaths(str) << endl;
    return 0;
}
