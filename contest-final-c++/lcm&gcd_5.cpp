// lcm & gcd 5
#include<bits/stdc++.h>

using namespace std;

int main(){  
	int times;
	cin>>times;
	while(times--){
		long long a, x, y;
		cin>>a>>x>>y;
		for(int i = 1; i <= __gcd(x, y); i++) cout<<a;
		cout<<endl;
	}
}


