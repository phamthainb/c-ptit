// bai 30 modulo_5
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		string n;
		long long m, k = 0;
		iff>>n>>m;
		for(long long i = 0; i < n.size(); i++ ){
			k = (k*10 + (n[i] - '0')) % m;
		}
		off<<k<<endl;
	}
	return 0;
}
