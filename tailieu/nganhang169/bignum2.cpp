//Code By PMD
#include<iostream>
#include<string>
using namespace std;
/*
    b1 : lam cho 2 xau cung` do dai
    b2 : cong a cho b nhu phep cong cap 1.
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
string a,b;
void input(){
    cin >> a >> b;
}
void solve(){
    cout << add(a,b) << endl;
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
 