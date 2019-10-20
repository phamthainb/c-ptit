// bai 22 prime_15
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int init[1000005];

int main(){
	// tao mang init
	for(int i = 1; i <= 1000000; i++) init[i] = i;
	for(int i = 2; i <= 1000; i++){
		if(init[i] == i){
			for(int j = i*i; j <= 1000000; j += i) init[j] = i;
		}
	}//
	int times;
	iff>>times;
	while(times--){
		int n, s;
		iff>>n;
		for(int i = 1; i <= n; i++) off<<init[i]<<" ";	
		off<<endl;
	}

	return 0;
}
