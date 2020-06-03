//string 20
#include<bits/stdc++.h>
using namespace std;

int main(){
	int times; cin>>times;
	while(times--){
		int a[] = { 1, 9, 4, 5, 8, 3, 1, 3, 5 };

    set<int> sa(a, a + 9);
    for(int i = 0; i < sa.size(); i++) cout<<sa<<" ";
	}
	return 0;
}

