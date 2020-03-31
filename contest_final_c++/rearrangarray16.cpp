//Re-arrang Array 16.
#include<bits/stdc++.h>
using namespace std;

bool tangdan(string n){
	for(int i = 0; i < n.size() - 1; i++) if(n[i] > n[i+1]) return false;
	return true;
}

int main(){
	int times; cin>>times;
	while(times--){
		string n; cin>>n;
		if(n.size() <= 2) cout<<-1<<endl;
		else if(tangdan(n)) cout<<-1<<endl;
		else{
			for(int i = n.size() - 1; i >= 0; i--){
				if(n[i] < n[i-1]) {
					swap(n[i], n[i-1]);
					break;
				}
			}
			cout<<n<<endl;
		}
		
	}
}

