//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    dau hieu chia het cho 11 : tong cac chu so vi tri chan - tong cac chu so o vi tri le chia het cho 11.
*/
string s;
void input(){
    cin >> s ;
}
void solve(){
    int sc = 0 , sl = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if ( (i + 1 )% 2 == 0 ) sc += s[i] - '0';
        else sl += s[i] - '0';
    }
    if ( (sc - sl )% 11 == 0 ) cout << 1 << endl;
    else cout << 0 << endl;
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
 