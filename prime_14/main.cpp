// bai 20 prime_13
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, s;
		iff>>n;
		s = sqrt(n);
		// sang nguyen to tu 2 -> sqrt(n)
		int init[s]={0};
		for(int i = 2; i <= s; i++){
			if(!init[i]){
				for(int j = i*i; j <= s; j += i) init[j] = 1;
			}
		}
		for(int i = 2; i <= s; i++){
			if(!init[i]) off<<i*i<<" ";
		}
		off<<endl;
	}
	return 0;
}
