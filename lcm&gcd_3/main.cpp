// bai 3
#include<iostream>
#include<fstream>
#include<algorithm>

#define modulo 1000000007

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		long long n, a[61] = {0};
		iff>>n;
		for(int i = 0; i < n; i++){
			iff>>a[i];
		}
		long long hx = a[0], gx = a[0], result = 1;
		for(int i = 1; i < n; i++){
			hx = hx*a[i] % modulo;
			gx = __gcd(gx, a[i]);
		}
		for(int i = 1; i <= gx; i++){
			result = result*hx % modulo;
		}
		off<<result<<endl;
	}
}         






