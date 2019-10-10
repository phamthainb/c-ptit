// bai 15 prime_8
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, p, x = 0;
		iff>>n>>p;
		for(int i = 2; i <= n; i++){
			int temp = i;
			if(temp%p == 0){
				while(temp%p == 0){
					temp/=p;
					x += 1;
				}
			}
		}
		off<<x<<endl;
	}
	return 0;
}
