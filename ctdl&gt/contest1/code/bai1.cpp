//
#include <bits/stdc++.h>
using namespace std;

string solve(string str)
{
	int n = str.length() - 1;
	while (str[n] == '1')
	{
		str[n] = '0';
		n--;
	}
	if(n >= 0){
		str[n] = '1';
	}
	return str;
}

int main()
{
	int times;
	cin >> times;
	while (times--)
	{
		string str;
		cin >> str;
		cout << solve(str) << endl;
	}
	return 0;
}
