// thuat toan quay lui liet ke cac xau nhi phan co do dai n
#include<bits/stdc++.h>
using namespace std;

int n, a[1000]={0};

void init(){
	cin>>n;
}

void print(){
	for(int i=1; i <=n; i++) cout<<a[i];
	cout<<endl;
}

void back_track(int k){
	for(int j = 0; j <= 1; j++){
		a[k]=j;
		if(k==n) print();
		else back_track(k+1);
	}
}

int main(){
	init();
	back_track(1);
}
