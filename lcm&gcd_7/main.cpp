// bai 7
#include<iostream>
#include<fstream>
#include<algorithm>
#include<cmath>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int x, y, z, n;
		iff>>x>>y>>z>>n;
		long long lcm = (x/__gcd(x, __gcd(y, z)))*y*z, 
		start = pow(10, n-1), end = start*10 - 1;
		
		if (lcm < start) off<<(start/lcm + 1)*lcm<<endl;
		else if(lcm >= start && lcm <= end) off<<lcm<<endl;
		else off<<-1<<endl;
	}
	return 0;
}
