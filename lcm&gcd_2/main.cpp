// bai 2
#include<iostream>
#include<fstream>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

long long  _gcd(long long a, long long b){
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
	return a;
}
long long _lcm(int n){
	long long temp = 1;
	for(int i = 1; i < n; i++){
		temp = (i*(temp))/_gcd(i, temp);
	}
	return temp;
}
int main(){
	int times;
	iff>>times;
	while(times--){
		int n;
		iff>>n;
		long long LCM;
		LCM = _lcm(n);
		off<<LCM<<endl;
	}
}
