// bai 12 prime_5
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
//ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	int dataDefault[10005] = {0};
	dataDefault[0] = dataDefault[1] = 1;
	for(int i = 2; i <= 100; i++){
		if(dataDefault[i] == 0){
			for(int j = i*i; j <= 100; j = j + i) dataDefault[j] = 1;
		}
	}
	while(times--){
		int m,n;
		iff>>m>>n;
		for(int i = m; i <= n; i++) if(dataDefault[i] == 0) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}
