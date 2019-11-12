
#include<bits/stdc++.h>

using namespace std;

int main(){
	int times;
	cin>>times;
	while(times--){
		long long a, b, gcd;
		cin>>a>>b;
		gcd = __gcd(a, b);
		cout<<(a*b)/gcd<<" "<<gcd<<endl;
	}
}





















