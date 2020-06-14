/**
@name  : xau nhi phan ke tiep
@solve : tim so 0 dau tien tu phai qua trai, swig all so 1 == 0 sau so 0 tim duoc
@by    : phamthainb
*/

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
