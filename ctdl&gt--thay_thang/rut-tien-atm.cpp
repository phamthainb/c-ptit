//rut tien ATM
#include<bits/stdc++.h>
using namespace std;

int listMoney[100], sum = 0, s, n, used[100] = {0}, found = 0;

void init(){
	cin>>n>>s;
	for(int i = 0; i < n; i++) cin>>listMoney[i];
//	for(int i = 0; i < n; i++) cout<<listMoney[i]<<" ";
//	cout<<n<<s;
} 

void print(){
	for(int i = 0; i < n; i++) cout<<used[i]<<" ";
	cout<<endl;
}

void Try(int i){
	//dung 0, 1 for mark
	for(int j = 0; j <= 1; j++){
			used[i] = j;
			sum += used[i] * listMoney[i];
			if(i == n){
				if(sum == s) {
					cout<<"found "<<endl;
					print();
					found = 1;
				}
//				print();
			}
			else if(sum <= s) Try(i+1);
			
			
			if(found) break;
			sum -= used[i] * listMoney[i];
	}
}

int main(){
	int times; cin>>times;
	while(times--){
		sum = 0;
		found = 0;
		init();
		Try(0);
	}
}

