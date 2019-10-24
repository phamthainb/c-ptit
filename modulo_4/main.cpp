// bai 28 modulo_3
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		long long n, k, result = 0;
		iff>>n>>k;
		if(k > n) off<<(1 + n)*n/2<<endl;
		else {
			for(int i = 1; i <= n; i++) result += i % k;
			off<<result<<endl;
		}
	}
	return 0;
}
