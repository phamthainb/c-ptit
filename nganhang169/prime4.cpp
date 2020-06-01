//Code By PMD
#include<iostream>
#include<math.h>
using namespace std;
const int N = 1e4+5;
long long n;
/*
    giong voi sang nguyen to
    luu y : sang o ben ngoai bo test cho do ton thoi gian
*/
 
int Prime[10006]={0}; // cac phan tu ban dau bang 0
void sieve(){ // sang nguyen to
    Prime[1] = 1;
	for(int i = 2; i <= 10000; i++){
		if(Prime[i] == 0){
			for(int j = i ; j <= 10000; j += i){
				if(Prime[j] == 0)
					Prime[j] = i;  // thua so nho nhat cua j la i
			}
		}
	}
}
void input(){
    cin >> n;
}
void solve(){
	for(int i = 1 ; i <= n; i++){
		cout << Prime[i] << " ";
	}
	cout<<endl;
}
int main(){
    int t=1; 
    cin >> t;
    sieve(); // sang nguyen to
    while(t--){ 
        input();
        solve();
    }
    return 0;
}
//Code By PMD
 
