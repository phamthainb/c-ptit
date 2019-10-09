// bai 13 prime_6
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

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
		int n;
		iff>>n;
		for(int i = 2; i <= n/2; i++){
			if(dataDefault[i] == 0 && dataDefault[n-i] == 0){
				 off<<i<<" "<<n-i<<endl;
				 break;
			}
		}
	}
	return 0;
}
