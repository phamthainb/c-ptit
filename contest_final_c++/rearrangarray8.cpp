//re-arrang array 8
#include<bits/stdc++.h>
using namespace std;
int dem(int a){
	if(a==0) return 1;
	int d = 0;
	while(a>0){
		d++;
		a/=10;
	}
	return d;
}
bool cmp(int a, int b){
	int x = a*(pow(10, dem(b)) + b);
	int y = b*(pow(10, dem(a)) + a);
	return x>y;
}

int main(){
	int times; cin>>times;
	while(times--){
		int n, a[100]; cin>>n;
		for(int i = 0; i < n; i++) cin>>a[i];
		
		sort(a, a + n, cmp);
		
		for(int i = 0; i < n; i++) cout<<a[i];
		cout<<endl;
	}
}

