#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int minn=a[0],ans=-1;
		for(int i=1;i<n;i++){
			if(a[i]>minn){
				ans=max(ans,a[i]-minn);
			}
			minn=min(minn,a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

