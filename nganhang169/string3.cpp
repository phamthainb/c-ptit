//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
*/
string s;
void input(){
    cin >> s ;
}
void solve(){
    if( (s[s.length() - 1] - ' 0')  % 5 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main(){
    int t=1; 
    cin>>t; cin.ignore();
    while(t--){ 
        input();solve();
    }
    return 0;
}
//Code By PMD
 
