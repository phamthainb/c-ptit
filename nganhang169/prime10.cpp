//Code By PMD
#include<iostream>
#include<math.h>;
using namespace std;
int tong (int a){
	int sum = 0;
	while(a > 0){
		sum += a % 10;
		a /= 10;
	}
	return sum;
}
int ngto(int n){
	if(n < 2) return 0;
	for(int i = 2; i<= sqrt(n) ; i++)
		if(n % i == 0) return 0;
	return 1;
}
void solve(){
    int n;
    cin >> n;
	int sum1 = tong(n) , sum2 = 0;
	if(ngto(n)){
		cout << "NO" << endl;
	}
	else{
		for(int i = 2 ; i <= sqrt(n) ; i++){
			while(n % i == 0){
				sum2 += tong(i);
				n /= i;
			}
		}
		if(n > 1) sum2 += tong(n);
		if(sum1 == sum2 ) cout << "YES" << endl;
		else cout << "NO" <<endl;
	}
}
int main(){
    int t=1; 
    cin >> t;
    while(t--){ 
        solve();
    }
    return 0;
}
//Code By PMD
 