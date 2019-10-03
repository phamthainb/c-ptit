// bai 4
#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		long long a, temp = 0;
		string b;
		iff>>a>>b;
		for(int i = 0; i < b.size(); i++){
			temp = ( temp*10 + (b[i] - '0')) %a; //  thuat toan euclid
		}
		off<<__gcd(temp, a)<<endl;
	}	
	return 0;
}
