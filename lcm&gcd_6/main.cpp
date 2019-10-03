// bai 6
#include<iostream>
#include<fstream>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int _gcd(long long a, long long b){
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
		int n,m, sum, subtract, a, b;
		iff>>n>>m;
		sum = n*(n+1)/2;
		b = (n*n + n -2*m)/4;
		a = sum - b;
		if(_gcd(a, b) == 1) off<<"Yes"<<endl;
		else off<<"No"<<endl;
	}
}

