#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long ans=0;
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0){
				ans=max(ans,i);
				while(n%i==0){
					n/=i;
				}
			}
		}
		if(n>1){
			ans=max(ans,n);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

