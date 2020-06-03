//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    duyet trau tim cac xau con.
*/
string s;
int k;
void input(){
    cin >> s >> k;
}
void solve(){
    int n = s.length() , res = 0;
    for(int i = 0 ; i < n ; i++){
        int cnt[26] = {0};
        for(int j = i ; j < n; j++){
            cnt[s[j] - 'a']++;
            int d = 0;
            for(int i = 0 ; i < 26 ; i++)
                if(cnt[i] > 0) d++;
            if( d == k ) res++;
        }
    }
    cout << res << endl;
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
 