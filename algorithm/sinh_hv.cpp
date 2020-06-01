#include<bits/stdc++.h>
using namespace std;

int n, a[1000];

void init();
bool checkLast();
void print();
void next();

int main(){
	int count = 1;
	init();
	print();
	while(!checkLast()){
		count += 1;
		next();
		print();
	}
	cout<<count<<endl;
	return 0;
}

void init(){
	cin>>n;
	for(int i = 1; i <=n; i++) a[i] = i;
}

bool checkLast(){
	for(int i=1;i<=n;i++){
        if(a[i]!=n-i+1) return false;
    }
    return true;
}

void print(){
	for(int i = 1; i <=n; i++) cout<<a[i];
	cout<<endl;
}

void next(){
	int k, j;
	// check k
	for(int i = n; i >= 1; i--) {
		if(a[i] > a[i-1]) { 
			k = i - 1;
			break;
		}
	}
	
	// check j + swap i <=> k
	for(int i = n; i >= k + 1; i--) {
		if(a[i] > a[k]) {
			j = i;
			swap(a[j], a[k]);
			break;
		}
	}

	// dao nguoc tu k + 1
	reverse(a + (k+1), a + n + 1);
}













