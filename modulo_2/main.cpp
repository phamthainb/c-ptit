// bai 27 modulo_2
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int a, m, x;
		iff>>a>>m;
		for(int i = 0; i < m; i++){
			if((a*i)%m == 1){
				off<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
