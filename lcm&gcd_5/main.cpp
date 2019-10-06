// bai 5
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
		long long a, x, y, temp;
		iff>>a>>x>>y;
		temp = __gcd(x, y);
		while(temp--) off<<a;
		off<<endl;
	}
	return 0;
}




