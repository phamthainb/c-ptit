// modulo 10
#include<bits/stdc++.h>
#define modulo 1000000007

using namespace std;
int main(){
	int times; cin>>times;
	while(times--){
		int n, x, p[2001];
		long long tempX = 1, kq = 0;
		cin>>n>>x;
		for(int i = 0; i < n; i++ ) cin>>p[i];
		for(int i = n - 1; i >= 0; i--){
			kq = (kq + p[i]*tempX) % modulo;
			tempX = tempX*x % modulo;
		}
		cout<<kq<<endl;
	}
}
