// bai 3
#include<iostream>
#include<fstream>

using namespace std;

// khai bao con tro ham
ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

long long _gcd(long long a, long long b){
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
	return a;
}

int main(){
	int times;
	iff>>times;
	while(times--){
		long long a[61]={0},n;
		long long hx = 1, gx;
		iff>>n;
		for(int i = 0; i < n; i++){
			iff>>a[i];
		}
		gx = a[0];
		for(int i = 0; i < n; i++){
			hx = hx * a[i];
			gx = _gcd(gx, a[i]);
		}
//		cout<<hx<<" "<<gx<<endl;
		off<<hx<<" "<<gx<<endl;
	}
}
