#include<iostream>
using namespace std;
typedef long long i64;
/*
    di thi chi can nhap roi in ra ket qua.
*/
const int maxN = 1e5+5;
int a[maxN];
int n,res = 1e9;
void input(){
    cin >> n ;
    res = 1e9;
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
        res = min(res,a[i]);
    }
}
void solve(){
    cout << res << endl;
}
int main(){
	int t = 1;
	cin >> t; 
	while(t--){
        input() ; 
        solve();
    }
	return 0;
}