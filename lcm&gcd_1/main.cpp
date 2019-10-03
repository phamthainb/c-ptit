#include<iostream>
#include<fstream>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

long long fun_gcd(long long a, long long b){
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
		long long a,b,lgm,gcd;
		iff>>a>>b;
//		cout<<a<<" "<<b<<endl;
		gcd = fun_gcd(a,b);
		lgm = (a*b)/gcd;
		off<<lgm<<" "<<gcd<<endl;
	}
	return 0;
}
