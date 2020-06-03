//Code By PMD
#include<bits/stdc++.h>
using namespace std;
/*
    tach cac so + cong co nguyen lon
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
            res = add(res,tmp);
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
 