#include<iostream>
using namespace std;
/*
    su dung mang dem
*/
const int maxN = 1e5+5;
int a[maxN];
int n;
void input(){
	cin >> n;
    for ( int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
}
void solve(){
    int cnt[maxN] = {0};
	for ( int i = 0 ; i < n ; i++)
        cnt[a[i]]++;
    for(int i = 0 ; i < n ; i ++){
        if ( cnt[a[i]] > 1){
            cout << a[i] << endl;
            break;
        }
    }
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