// bai 31 modulo_6
#include<bits/stdc++.h>


using namespace std;

ifstream iff("inp.txt", ios::in);
//ofstream off("out.txt", ios::out);
long long _logic(long long res, long long b, long long m){
	if(b == 0) return 1;
	long long temp = _logic(res, b/2, m);
	temp = temp*temp % m;
	if(b%2 == 0) temp = temp*res % m;
	return temp;
}
int main(){
	int times;
	iff>>times;
	while(times--){
		string a;
		long long b, m, res = 0;
		iff>>a>>b>>m;
		for(int i = 0; i < a.size(); i++) res = res*10 + a[i]-'0' % m;
		cout<<_logic(res, b, m)<<endl;
	}
	return 0;
}
