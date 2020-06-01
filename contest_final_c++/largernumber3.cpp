//large number 3
#include<bits/stdc++.h>
using namespace std;

void nhan(string x, string y){
	vector<int> temp(1000001, 0);
	int max = x.size() + y.size();
	
	for(int i = y.size() - 1; i >= 0; i--){
		for(int j = x.size() - 1; j >= 0; j--){
			temp[i + j + 1] += (y[i] - '0')*(x[j] - '0');
		}
	}
	// cong lai
	int nho = 0;
	for(int i = max - 1; i >= 0; i--){
		temp[i] = temp[i] + nho;
		nho = temp[i]/10;
		temp[i] = temp[i]%10;
//		cout<<"@@"<<temp[i]<<" "<<nho<<"=>"<<temp[i]/10<<endl;
	}
	// cout
	if(temp[0] != 0) cout<<temp[0];
	for(int i = 1; i <= max - 1; i++) cout<<temp[i];
	cout<<endl;
}

int main(){
	int times; cin>>times;
	while(times--){
		string x, y; cin>>x>>y;
		if(x.size() >= y.size()) nhan(x, y);
		else nhan(y, x);
	}
	return 0;
}
