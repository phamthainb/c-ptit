#include<bits/stdc++.h>

using namespace std;
string s;
int _solo() {
    int rs= 0;
    stack<int>list;
    list.push(-1);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') list.push(i);
        else {
            list.pop(); //rm open tag
            if (list.empty()) list.push(i);
            else {
                rs = max(rs, i - list.top());
            }
        }
    }
    return rs;
}
int main() {
    int t; cin>>t;
    while (t--) {
        cin>>s;
        cout<<_solo()<<endl;
    }
}