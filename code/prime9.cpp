//prime 9
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int n; cin>>n;
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i == 0){
				int count = 0;
				while(n%i == 0){
					n=n/i;
					count++;
				}
				cout<<i<<" "<<count<<" ";
			}
		}
		if(n > 1) cout<<n<<" 1";
		cout<<endl;
	}
}
