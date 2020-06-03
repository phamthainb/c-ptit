// lcm & gcd 7
#include<bits/stdc++.h>
using namespace std; 


int main(){
	int times; cin>>times;
	while(times--){
		long long x, y, z, n, lcm, min, max; cin>>x>>y>>z>>n;
		 lcm = x*y/__gcd(x, y);
		 lcm = lcm*z/__gcd(lcm, z);
		min = pow(10, n - 1); max = pow(10, n) - 1;
		if(lcm <= min){
			if(min%lcm == 0) cout<<min<<endl;
			else cout<<lcm * ((min/lcm) + 1)<<endl;
		}else if(min < lcm && lcm <= max) cout<<lcm<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
