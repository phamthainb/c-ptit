// bai 17 prime_10
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int sum (int n){
	int s = 0;
	while(n > 0){
		s += n%10;
		n /= 10;
	}
	return s;
}

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, sum_n = 0, sum_prime = 0;
		iff>>n;
		sum_n = sum(n);
		vector<int> prime;
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i == 0){
				while(n%i == 0){
					prime.push_back(i);
					n /= i;
				}
			}
		}
		if(n > 1) prime.push_back(n);
		for(vector<int>::iterator i = prime.begin(); i < prime.end(); i++) sum_prime += sum(*i);
		if(sum_n == sum_prime) off<<"Yes"<<endl;
		else off<<"No"<<endl;
	}
	return 0;
}
