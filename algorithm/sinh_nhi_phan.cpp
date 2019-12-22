// sinh nhi phan ke tiep
#include<bits/stdc++.h>
using namespace std;

int n, a[1000]={0};

void init(){
	cin>>n;
}
void print(){
	for(int i = 1; i <=n ;i++) cout<<a[i];
	cout<<endl;
}
bool checkLast(){
	for(int i = 1; i <=n;i++){
		if(a[i] != 1) return false;
	}
	return true;
}
void next(){
	for(int i =n; i >= 1; i--){
		if(a[i] == 0){
			a[i] = 1;
			break;
		}else a[i] = 0;
	}
}
int main(){
	int count=1;
	init();
	print();
	while(!checkLast()){
		count++;
		next();
		print();
	}
	cout<<"@@"<<count;
	return 0;
}
