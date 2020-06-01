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
    for( int i = 2 ; i <= sqrt(n) ; i++){
		while( n % i == 0){
			n/=i;
			cout << i << ' ';
		}
	}
	if ( n > 1 ) cout << n;
	cout << endl;
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
 