// prime 18
#include<bits/stdc++.h>
using namespace std;

long long pri(long long m, long long n, long long a){
	if(m % a == 0) return abs((n/a) - (m/a)) + 1;
	return abs((n/a) - (m/a));	
}

int main(){
	long long times; cin>>times;
	while(times--){
		long long m, n, a, b; cin>>m>>n>>a>>b;
		cout<<pri(m, n, a) + pri(m, n, b) - pri(m, n, a*b/__gcd(a,b))<<endl;
	}
	return 0;
}
