// bai 36 modulo_11
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
//ofstream off("out.txt", ios::out);
long long nhan(long long a, long long b, long long mod){
	if(b == 0) return 0;
	long long temp = nhan(a, b/2, mod);
    temp = (temp + temp) % mod;
	if(b % 2 == 1) temp = (temp + a) % mod;
	return temp;
}
int main(){
	int times;
	iff>>times;
	while(times--){
	 long long a, b, c;
	 iff>>a>>b>>c;
	 cout<<nhan(a, b, c)<<endl;	
	}
	return 0;
}
