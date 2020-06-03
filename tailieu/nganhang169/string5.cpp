//Code By PMD
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
string s;
void input(){
    cin >> s;
}
void solve(){
    vector < int > cnt(26,0);
    for(int i = 0 ; i < s.length() ; i++) cnt[s[i]-'a'] ++;
    sort(cnt.begin(),cnt.end());
    int sum = 0;
    for(int i = 24 ; i >= 0 ; i--){
        sum += cnt[i];
        if ( sum + 1 >= cnt[25] ){
            cout << 1 << endl;
            return;
        }
    }
    cout <<  0  << endl; 
}
int main(){
    int t=1; 
    cin>>t; cin.ignore();
    while(t--){ 
        input();
        solve();
    }

    return 0;
}
//Code By PMD
 