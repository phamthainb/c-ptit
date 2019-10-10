// bai 18 prime_11
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

bool prime(int n){
	if(n == 2) return true;
	if(n%2 == 0) return false;
	for(int i = 3; i <= sqrt(n); i += 2) if(n%i == 0) return false;
	return true;
}
int main(){
	int times;
	iff>>times;
	while(times--){
		int n;
		iff>>n;
		if(n%2 != 0) off<<0<<endl;
		else{
			int p = 0;
			while(n%2 == 0) {
				n /= 2;
				p += 1;
			}
			if(prime(n) and n == (pow(2, p+1) - 1)) off<<1<<endl;
			else off<<0<<endl;
		}
	}
	return 0;
}
