/*
@name  : tap con ke tiep (sinh ke tiep)
@solve : 
@by    : phamthainb
*/
#include <bits/stdc++.h>
using namespace std;

//define
int n, k, x[100];

void print()
{
	for (int i = 1; i <= k; i++)
		cout << x[i] << " ";
}

void init()
{
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
		cin >> x[i];
}

//next
void solve()
{
	int t = k;
	while (x[t] == (n - k + t))
		t--;
	if (t > 0)
	{
		x[t]++;
		for (int i = t + 1; i <= k; i++)
			x[i] = x[i - 1] + 1;
		print();
	}
	else
	{
		//if last => print first
		for (int i = 1; i <= k; i++)
			cout << i << " ";
	}
	cout << endl;
}

int main()
{
	int times;
	cin >> times;
	while (times--)
	{
		init();
		solve();
	}
}