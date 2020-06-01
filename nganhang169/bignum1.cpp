//Code By PMD
#include<iostream>
#include<string>
using namespace std;
/*
    tinh |a - b|, 
    b1 : lam cho 2 xau cung` do dai
    b2 : tru a cho b nhu phep tru cap 1.
*/
string sub(string a, string b){
    string res = "";
    while(b.length() < a.length()) b="0"+b;
    int borrow = 0;
    for(int i=a.length()-1; i >=0 ; i--){
        int tmp=a[i]-b[i]-borrow;
        if(tmp < 0){
            tmp += 10;
            borrow = 1;
        }
        else borrow=0;
        res = (char)(tmp%10 + 48) + res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);    // xoa chu so 0 dau tien
    return res;
}
string a,b;
void input(){
    cin >> a >> b;
}
void solve(){
    if ( a < b ) swap(a,b);
    cout << sub(a,b) << endl;
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
 