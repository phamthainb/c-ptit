// bai 26 modulo_1
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		long long x, y, p, result = 1;
		iff>>x>>y>>p;
		for(int i = 1; i <= y; i++) result = (result*x) % p;
		off<<result<<endl;
	}
	return 0;
}
