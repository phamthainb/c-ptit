#include<iostream>
#include<algorithm>
using namespace std;
/*
    sap xep 
*/
const int maxN = 1e6+5;
int a[maxN];
int n , k;
void input(){
	cin >> n >> k;
    for ( int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
}
void solve(){
   	sort(a,a+n);
    cout << a[k-1] << endl;
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