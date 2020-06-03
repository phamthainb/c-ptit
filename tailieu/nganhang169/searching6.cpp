#include<iostream>
#include<algorithm>
using namespace std;
/*
    sap xep + tham lam 
*/
const int maxN = 1e7+5;
int a[maxN];
int n;
bool cmp(int a , int b){
    return ( abs(a) < abs(b));
}
void input(){
	cin >> n ;
    for ( int i = 0 ; i < n ; i ++)
        cin >> a[i];
}
 
void solve(){
	sort(a,a+n,cmp);
	int m = abs(a[1]+a[0]);
    int kq = a[1]+a[0];
	for ( int i = 1 ; i < n - 1 ; i ++){
		if (m >= abs(a[i]+a[i-1])) {
            m =abs(a[i]+a[i-1]);
            kq = a[i]+a[i-1];
        }
	}
	cout << kq << endl;
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
