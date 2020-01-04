//
#include<bits/stdc++.h>
using namespace std;
int a[21]={0}, n;

void init(){
	cin>>n;
}

void print(){
	for(int i = 1; i <= n; i++) cout<<a[i];
	cout<<endl;
}

void back_track(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n) print();
		else back_track(i+1);
	}
}

int main(){
	int times; cin>>times;
	while(times--){
		init();
		back_track(1);
	}
}

