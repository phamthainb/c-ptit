#include <bits/stdc++.h>
using namespace std;
int n,x;
bool cmp(int a, int b){
	int c=abs(x-a);
	int d=abs(x-b);
	if(c>=d) return false;
	else return true;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}	
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//Code by Ninh Ngoc

