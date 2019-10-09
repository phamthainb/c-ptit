// bai 10 prime_3
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, a[10001] = {0};
		iff>>n;
		for(int i = 2; i <= n; i++){
			if(a[i] == 0){
				off<<i<<" ";
				for(int j = i*i; j <= n; j = j + i){
					a[j] = 1;
				}
			}
		}
		off<<endl;
	}
	return 0;
}
