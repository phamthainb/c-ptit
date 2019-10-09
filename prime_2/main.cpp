// bai 9 prime_2
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		long long n;
		iff>>n;
		vector<int> result;
		for(int i = 2; i <= sqrt(n); i++){
			while(n%i == 0){
				result.push_back(i);
				n/=i;
			}
		}
		if(n > 1) result.push_back(n);
	off<<result[result.size() - 1]<<endl;
	}
	return 0;
}
