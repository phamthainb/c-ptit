// bai 23 prime_16
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int init[1000005]={0};

int main(){
	// tao mang init
	for(int i = 2; i <= 1000; i++){
		if(init[i] == 0){
			for(int j = i*i; j <= 1000000; j += i) init[j] = 1;
		}
	}//
	int times;
	iff>>times;
	while(times--){
		int n, s = 0;
		iff>>n;
		for(int i = 2; i <= sqrt(n); i++) if(init[i] == 0) s += 1;	
		off<<s<<endl;
	}
	return 0;
}
