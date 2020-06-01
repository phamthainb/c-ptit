//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    dp[i] = max(dp[i-1] + s[i] , dp[i-1] * s[i]);
*/
string add(string a, string b){
    string res = "";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry = 0; // so du
    for(int i=a.length()-1 ;i >=0 ;i--){
        int tmp = a[i]- 48 + b[i]-48 + carry;
        carry = tmp/10;
        tmp = tmp % 10;
        res = (char)(tmp+48)+res;
    }
    if(carry > 0) res= "1" + res;
    return res;
}
string mul(string a, string b){
    string res="";
    int n = a.length();
    int m = b.length();
    int len = n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j = n-1; j>=0 ; j--){
            if(i-j <=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
            tmp+=carry;
            carry=tmp/10;
            res=(char)(tmp%10 + 48)+res;
        }
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1); // xoa chu so 0 o cuoi
    return res;
}
string s;
void input(){
    cin >> s ;
}
void solve(){
    int n = s.length();
    string dp[n+5];
    dp[0] = "" ; dp[0] += s[0];
    //cout << dp[0] << endl;
    for(int i = 1;  i < n ; i++){
        string tmp = "" ; tmp += s[i];
        dp[i] = max(add(dp[i-1],tmp),mul(dp[i-1],tmp));
        //cout << dp[i-1] << ' ' << dp[i] << endl;
    }
    cout << dp[n-1] << endl;
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
 