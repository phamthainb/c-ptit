//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    dau hieu chia het cho 8: 3 chu so cuoi chia het cho 8 thi so do chia het cho 8.
    dau hieu chia het cho 3 : tong cac chu so chia her cho 3.
    -> mang cong don luu tong chu so , day con nao co tong khong chia het cho 3 , thi xet chia het cho 8.
*/
string s;
bool chiahetcho8(string a){
    int sum = 0;
    while(a.length() < 3 ) a = "0" + a;
    for(int i = a.length() - 3 ;  i < a.length() ; i++){
        sum = sum * 10 + a[i] - '0';
    }
    if (sum % 8 == 0 ) return true;
    return false;
}
void input(){
    cin >> s ;
}
void solve(){
    int n = s.length();
    int dp[n+5]; dp[0] = 0;
    int res = 0;
    for(int i = 1 ; i <= n ; i++) dp[i] = s[i-1] - '0' + dp[i-1];
    for(int i = 0 ; i < n ; i++){
        string tmp = "";
        for(int j = i ; j < n ; j++){
            tmp += s[j];
            int tongcs = dp[j+1] - dp[i];
            if( tongcs % 3 != 0){      // ko chia het cho 3
                if( chiahetcho8(tmp) ){   // chia het cho 8
                    res++;
                    //cout << tmp << endl;
                }
            }

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
 