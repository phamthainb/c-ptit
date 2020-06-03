//modulo 6
#include<bits/stdc++.h>
using namespace std;
long long pow(long long a, long long b, long long m){
	if(b == 0) return 1;
	long long temp = pow(a, b/2, m);
	temp = temp*temp % m;
	if(b%2) temp = temp*a % m;
	return temp;
}

int main(){
	int times; cin>>times;
	while(times--){
		string a; long long temp = 0, b, m;		cin>>a>>b>>m;
		for(int i = 0; i < a.size(); i++){
			temp = (temp*10 + a[i]-'0') % m;
		}
		
		cout<<pow(temp, b, m)<<endl;
	}
}
