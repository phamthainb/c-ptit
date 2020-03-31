// combination 3
#include<bits/stdc++.h>
using namespace std;

int n, a[21], used[21]={0};
void init(){
	cin>>n;
	for(int i = 1; i <= n; i++) a[i]=i;
}
void print(){
	for(int i = 1; i <= n; i++) cout<<a[i];
	cout<<" ";
}
void hoanvi(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i]=j; used[j]=1;
			if(i == n) print();
			else hoanvi(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int times; cin>>times;
	while(times--){
		init();
		hoanvi(1);
	cout<<endl;
	}
	
}
