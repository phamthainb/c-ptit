// bai 6
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
		long long n, m, sum;
		iff>>n>>m;
		sum = (n*n + n)/2;
		if( m > sum ) off<<"No"<<endl;
		else {
			if( sum%2 == m%2 ){
				long long x,y;
				x = (sum + m)/2;
				y = sum - x;
				if(__gcd(x, y) == 1) off<<"Yes"<<endl;
				else off<<"No"<<endl;
			}
			else off<<"No"<<endl; 
		}
	}	
}




