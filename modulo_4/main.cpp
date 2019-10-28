// bai 29 modulo_4
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, k, result = 0;
		iff>>n>>k;
		for(int i = 1; i <= n; i++){
			result += i%k;
		}
		if(result == k) off<<1<<endl;
		else off<<0<<endl;
	}
	return 0;
}
