//CPPLCM03 - LCM & GCD 3
#include<bits/stdc++.h>
#define M 1000000007

using namespace std;

int main(){
	int times;
	cin>>times;
	while(times--){
		int n;
		long long hx = 1, gx;
		vector<long long> a;
		cin>>n;
		for(int i = 0; i < n; i++){
			long long temp; cin>>temp;
			a.push_back(temp);
			hx = hx*a[i] % M;
		}
		// gx
		gx = a[0];
		for(int i = 1; i < n; i++){
			long long tempGCD = __gcd(gx, a[i]);
			gx = gx/tempGCD * a[i] % M;
		}
		cout<<hx<<" "<<gx<<endl;
	}
}
