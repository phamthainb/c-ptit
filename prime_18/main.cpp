// bai 25 prime_18
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int m, n, a, b, s = 0;
		iff>>m>>n>>a>>b;
		for(int i = m; i <= n; i++){
			if(i%a == 0 and i%b == 0) s += 1;
			else if(i%a == 0) s += 1;
			else if(i%b == 0) s += 1;
		}
		off<<s<<endl;
	}
	return 0;
}
