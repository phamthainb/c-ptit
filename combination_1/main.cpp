
// bai 44 combination 1
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
//ofstream off("out.txt", ios::out);

void init(int x[], int n){
	for(int i = 0; i < n; i++) x[i] = 0;
}

void in(int x[], int n){
		for(int i = 0; i < n; i++) cout<<x[i]<<" ";
		cout<<endl;
}
bool check(int x[], int n){
	for(int i = 0; i < n; i++) if(x[i] == 0) return true;
	return false;
}
void sinh(int x[], int n){
//	int k;
	for(int i = n - 1; i >= 0; i--){
		if(x[i] == 0){
			x[i] = 1;
			break;
		}else x[i] = 0;
	}
}
int main(){
	int times;
	iff>>times;
	while(times--){
		// thuat toan sinh
		int n, x[21];
		iff>>n;
		init(x, n); in(x, n);
		while(check(x, n)){
			sinh(x, n);
			in(x, n);
		} 
	}
	return 0;
}
