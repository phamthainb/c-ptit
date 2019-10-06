// bai 8 prime_1
#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

//bool prime(long long n){
//	if(n == 2) return true;
//    if(n%2 == 0) return false;
//	for(long long i = 3; i <= sqrt(n); i+=2) if(n%i == 0) return false;
//	return true;
//}

int main(){
	int times;
	iff>>times;
	while(times--){
		long long n;
		iff>>n;
		
		for(int i = 2; i <= sqrt(n); i++){
			while(n%i == 0){
				off<<i<<" ";
				n/=i;
			}
		}
		if(n > 1) off<<n;		
		off<<endl;
	}
	return 0;
}
