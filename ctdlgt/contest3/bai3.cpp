//bai 3 , find maxx
#include <bits/stdc++.h>
using namespace std;

const long long modulo = 1e9 + 7;

int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    int n, a[1000];
    //input
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    //solve
    sort(a, a + n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
      long long temp = (a[i] * i) % modulo;
      sum = (sum + temp) % modulo;
    }
    //result
    cout<<sum<<endl;
  }
  return 0;
}