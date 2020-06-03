//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    tach cac so
*/
bool isnumber(char c){
    return ( '0' <= c && c <= '9');
}
string s;
void input(){
    cin >> s ;
}
void solve(){
    string res = "0";
    for(int i = 0 ; i < s.length() ; i++){
        if( isnumber(s[i]) ){
            int j = i;
            string tmp = "";
            while( isnumber(s[j]) && j < s.length() ){
                tmp += s[j];
                j++;
            }
            i = j - 1;
            //cout << tmp << ' ' << i << endl; 
            res = max(res,tmp);
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
 