//Code By PMD
#include<iostream>
#include<string>
using namespace std;
/*
    do dai cua xau ket qua la n + m - 1;
    nhan nhu nhan cap 1
*/
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
                cout << j <<' '<< a1 << ' ' << b1 << ' ' << a1*b1 << endl;
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
string a,b;
void input(){
    cin >> a >> b;
}
void solve(){
    cout << mul(a,b) << endl;
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
 
