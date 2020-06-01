//hoan vi cua n
#include<bits/stdc++.h>
using namespace std;

int n, used[100] = {0}, a[100];
void print(){
	for(int i = 1; i <=n ; i++) cout<<a[i]<<" ";
	cout<<endl;	
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = 1;
			if(i == n) print();
			else Try(i+1);
			used[j] = 0;
		}
		
	}
}
int main(){
	int times; cin>>times;
	while(times--){
		cin>>n;
		Try(1);		
	}
}

