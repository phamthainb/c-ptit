#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k,ans=-1;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]==k){
					ans=1;
					break;
				}
			}
			if(ans) break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

