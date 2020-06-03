//Sorting 5
#include<bits/stdc++.h>
using namespace std;

void input(vector<int> &a, int n){
	for(int i = 0; i < n; i++){
		int temp; cin>>temp;
		a.push_back(temp);
	}
}

int main(){
	int times; cin>>times;
	while(times--){
		int n, m;
		vector<int>c, temp;
		vector<int>::iterator ip;
		cin>>n>>m;
		input(c, n + m);
		sort(c.begin(), c.end()); temp = c;
		ip = unique(c.begin(), c.end());
		c.resize(distance(c.begin(), ip));
		for(int i = 0; i < c.size(); i++) cout<<c[i]<<" "; cout<<endl;
		for(int i = 0; i < temp.size() - 1; i++) if(temp[i] == temp[i+1]) cout<<temp[i]<<" ";
		cout<<endl;
	}
}

