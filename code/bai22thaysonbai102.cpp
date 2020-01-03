#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=0,tmp=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				tmp=a[i]+a[j];
				if(tmp==k)
				{
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}

