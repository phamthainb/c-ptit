#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n*k];
		for(int i=0;i<n*k;i++){
			cin>>a[i];
		}
		sort(a,a+n*k);
		for(int i=0;i<n*k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

