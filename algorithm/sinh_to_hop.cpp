// thuat toan sinh to hop chap k cua n phan tu
#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];

void init(){
	cin>>n>>k;
	for(int i= 1; i<=k; i++) a[i]=i;
}

void print(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<endl;
}

bool checkLast(){
	for(int i = k; i >= 1; i--){
		if(a[i] != (n-k+i)) return false;
	}
	return true;
}
void next(){
	// tim vi tri t lon nhat de a[t] < n - k + t
	int t;
	for(int i = k; i >= 1; i--){
		if(a[i] < (n - k + i)){
			t = i;
			a[i]++; // yi = xt + 1
			break;
		}
	}
	// ....< t => giu nguyen
	// t < .....=> a[i] = a[t] + ( i -t )
	for(int i = t + 1; i <= k; i++) a[i] = a[i-1] + 1;
}
int main(){
	int count=1;
	init();
	print();
	while(!checkLast()){
		next();
		print();
		count ++;
	}
	cout<<"@@"<<count<<endl;
}
