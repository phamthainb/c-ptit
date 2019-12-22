// quay lui hoan vi cua n phan tu
#include<bits/stdc++.h>
using namespace std;

int n, a[1000], used[1000]={0};

void init(){
	cin>>n;
	for(int i=1; i<=n; i++) a[i]=i;
}

void print(){
	for(int i=1; i <= n; i++) cout<<a[i];
	cout<<endl;	
}

void back_track(int i){
		for(int j=1; j<=n;j++){
			if(!used[j]){
				a[i]=j; used[j]=1;
				if(i==n) print();
				else back_track(i+1);
				used[j]=0;
			}
		}
}

int main(){
	init();
	back_track(1);
}
