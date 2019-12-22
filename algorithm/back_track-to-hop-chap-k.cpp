// quay lui sinh to hop chap k cua n phan tu
#include<bits/stdc++.h>

using namespace std;

int n,k,a[1000];

void init(){
	cin>>n>>k;
}

void print(){
	for(int i=1; i <= k; i++) cout<<a[i];
	cout<<endl;	
}

void back_track(int i){
	for(int j = a[i-1] + 1; j <= n - k + i; j++){
		a[i]=j;
		if(i==k) print();
		else back_track(i+1);
	}	
}

int main(){
	init();
	back_track(1);
}
