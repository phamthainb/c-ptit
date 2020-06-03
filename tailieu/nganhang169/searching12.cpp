#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/*
	sort + chat nhi phan
    co the tu code chat nhi phan , dung ham binary_search() cho do ton time.
*/
const int  N = 1e5 + 5 ;
int a[N];
int n,x;
void input(){
    cin >> n >> x;
    for(int i = 0  ; i < n ;i ++){
        cin >> a[i];
    }
}
void solve(){
    sort(a,a+n);
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        if( binary_search(a,a+n,a[i]+x) == 1){ // tim thay a[i] + x trong khoang tu 0 .... n
            cout << 1 << endl;
            flag = 1;
            break;
        }
    }
    if(!flag)
        cout << -1 << endl;
    
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