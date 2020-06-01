//Code By PMD
#include<iostream>
#include<stack>
using namespace std;
const int N = 1e5 + 5;
/*
    dung` stack  : http://www.cplusplus.com/reference/stack/stack/
    neu s[i] = 'D' push i + 1 vao stack;
    neu s[i] = 'I' hoac i == len(s) thi day het cac phan tu trong stack ra.
*/
string s;
void input(){
    cin >> s;
}
void solve(){
    stack < int > res;
    for(int i = 0 ; i <= s.length() ; i++){
        if ( i == s.length() || s[i] == 'I'){
            cout << i + 1;
            while(!res.empty()){
                cout << res.top();
                res.pop();
            }
        }
        else if ( s[i] == 'D')
            res.push(i+1);
    }
    cout << endl;
}
int main(){
    int t=1; 
    cin>>t; 
    while(t--){ 
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 