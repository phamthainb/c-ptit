// 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		string str;
		int a[1001];
		cin>>str;
		for(int i = 0; i < str.size(); i++) a[i] = (int)(str[i] - '0');//convert string to array
		for(int i = str.size() - 1; i >= 0; i--) {
			if(a[i] == 1) a[i] = 0;
			else{
				a[i] = 1;
				break;
			}
		}
		for(int i = 0; i < str.size(); i++) cout<<a[i];
		cout<<endl;
	}
	return 0;
}
