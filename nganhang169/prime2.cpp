//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
long long n;
/**/
void input(){
    cin >> n;
}
void solve(){
    long long res = 0;
    for( long long i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0){
            res = max(res,i);
            while( n % i == 0) n/=i;
        }
	}
	if ( n > 1 ) res = max(res,n);
	cout << res << endl;;
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
 