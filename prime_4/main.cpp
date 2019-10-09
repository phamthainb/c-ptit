// bai 11 prime_4
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, i = 2;
		iff>>n;
		for(int i = 1; i <= n; i++){
			if(i == 1) off<<1<<" ";
			else {
				int count = 0;
				for(int j = 2; j <= sqrt(i); j++){
					if(i%j == 0) {
						off<<j<<" ";
						count +=1;
						break;
					}	
				} 
				if(count == 0) off<<i<<" ";
			}
		}
		off<<endl;
	}
	return 0;
}
