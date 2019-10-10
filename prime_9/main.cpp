// bai 16 prime_9
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n;
		iff>>n;
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i == 0){
				int exponential = 0;
				while(n%i == 0){
					n /= i;
					exponential += 1;
				}
				off<<i<<" "<<exponential<<" ";
			}
		}
		if(n > 1) off<<n<<" "<<1<<" ";
		off<<endl;
	}
	return 0;
}
