//bai 103
#include<bits/stdc++.h>
#define p 1000000007

using namespace std;
int main(){
	int times; cin>>times;
	while(times--){
		vector<long long> a;
		vector<long long>::iterator ip;
		int n; cin>>n;
		for(int i = 0; i < n; i++){
			string temp; cin>>temp; 
			for(int j = 0; j < temp.size(); j++){
				a.push_back(temp[j]-'0');
			}
		}
		sort(a.begin(), a.end());
		ip = unique(a.begin(), a.end());
		a.resize(distance(a.begin(), ip));
		for(int i = 0; i < a.size(); i++) cout<<a[i]<<" ";
		cout<<endl;		
	}
}

