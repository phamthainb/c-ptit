// prime 12
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n, k, conut = 0,check = 0, i = 2; cin>>n>>k;
		while(n > 1){
			if(n%i == 0){
				n = n / i;
				conut++;
				if(conut == k){
					conut = 0; check = 1;
					cout<<i<<endl;
					break;
				}
			}else i++;
		}
		if(conut < k && check == 0) cout<<-1<<endl;
	}
}
