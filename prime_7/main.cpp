// bai 14 prime_7
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, count = 0,i = 2;
		iff>>n;
		int k = n;
		while(i <= k){
			if(n%i == 0){
				int checkRepeat = 0;
				while(n%i == 0){
					n/=i;
					checkRepeat += 1;
					count += 1;
				}
				if(checkRepeat > 1){
					count = 0;
					break;
				}
			}
			else i += 1;
		}
		if(count == 3) off<<1<<endl;
		else off<<0<<endl;
	}
	return 0;
}
