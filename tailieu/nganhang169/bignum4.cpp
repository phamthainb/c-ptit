//Code By PMD
#include<iostream>
#include<string>
using namespace std;
/*
*/
string a , b ,lazy[10];
string add(string a, string b){
    string res = "";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry = 0;
    for(int i=a.length()-1 ;i >=0 ;i--){
        int tmp = a[i]- 48 + b[i]-48 + carry;
        carry = tmp/10;
        tmp = tmp % 10;
        res = (char)(tmp+48)+res;
    }
    if(carry > 0) res="1"+res;
    return res;
}
void lazy_div(){
	lazy[0] = "0";
	for(int i = 1; i < 10;i++){
        lazy[i] = add(lazy[i-1],b);
        //cout << tmp[i] << endl;
    }
}
string sub(string a, string b){
    string res = "";
    while(a.length() < b.length()) a="0"+a;
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
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
bool cmp(string a , string b){
    if(a.size() > b.size())
	    while(a.size()!= b.size() ) b ='0'+b;
	else 
	    while(a.size()!= b.size() ) a = '0'+a;
	return (a >= b);
}
string div(string a,string b){
	string carry = "", res = "";
	for(int i = 0 ;i < a.size();i++){
	 	carry += a[i];
	 	int j = 0;
	 	while(j < 10 && cmp(carry , lazy[j])) j++;
	 	carry = sub(carry,lazy[j-1]);
	 	res += char(j - 1 + '0');
	}
	while(res.size() > 1 && res[0]=='0') res.erase(0,1);
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
 