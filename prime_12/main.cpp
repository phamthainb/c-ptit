// bai 19 prime_12
#include<bits/stdc++.h>

using namespace std;

ifstream iff("inp.txt", ios::in);
ofstream off("out.txt", ios::out);

int main(){
	int times;
	iff>>times;
	while(times--){
		int n, k, i = 2;
		iff>>n>>k;
		vector<int> result;
		while(n > 1){
			if(n%i == 0){
				result.push_back(i);
				n /= i;
			}
			else i++;
		}
		if(result.size() < k) off<<-1<<endl;
		else off<<result[k-1]<<endl;
	}
	return 0;
}
